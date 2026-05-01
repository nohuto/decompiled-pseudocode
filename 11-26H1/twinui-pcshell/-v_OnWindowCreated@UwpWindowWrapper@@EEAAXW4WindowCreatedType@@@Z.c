/*
 * XREFs of ?v_OnWindowCreated@UwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1801C65E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___ @ 0x1804413BC (Windows--Internal--ComTaskPool--QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___.c)
 */

void __fastcall UwpWindowWrapper::v_OnWindowCreated(int *a1, int a2)
{
  int v2; // esi
  void *v3; // rdi
  HWND v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 != 1 )
  {
    v2 = a1[155];
    v3 = (void *)a1[133];
    v4 = (HWND)a1[74];
    if ( (_DWORD)v3 != (unsigned int)GetPropW(v4, L"MaterialProperties.WindowTransparencyMode") )
    {
      SetPropW(v4, L"MaterialProperties.WindowTransparencyMode", v3);
      if ( (unsigned int)(v2 - 4) <= 1
        && (int)CoreIsWindowServiceSupported(v4, &GUID_98827327_fd4e_49c6_8d27_34fd1e3b2c54) >= 0 )
      {
        v8 = v4;
        v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___(v5, &v8);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x20,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.cpp",
            (const char *)(unsigned int)v6);
      }
    }
  }
}
