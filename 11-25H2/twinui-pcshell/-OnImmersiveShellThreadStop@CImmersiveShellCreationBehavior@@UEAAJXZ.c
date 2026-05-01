/*
 * XREFs of ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18018C470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEAVCThreadRefHost@@@Z @ 0x18018C4E0 (-reset@-$unique_ptr@VCThreadRefHost@@U-$default_delete@VCThreadRefHost@@@wistd@@@wistd@@QEAAXPEA.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018C9B0 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStop(CImmersiveShellCreationBehavior *this)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v3 = v2;
  if ( v2 >= 0 )
  {
    wistd::unique_ptr<CThreadRefHost,wistd::default_delete<CThreadRefHost>>::reset((char *)this + 24, 0LL);
    if ( *((_BYTE *)this + 16) )
    {
      OleUninitialize();
      *((_BYTE *)this + 16) = 0;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34B,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
