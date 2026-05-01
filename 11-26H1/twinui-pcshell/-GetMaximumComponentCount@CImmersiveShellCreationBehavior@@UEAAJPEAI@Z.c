/*
 * XREFs of ?GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z @ 0x180184590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x180184A38 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::GetMaximumComponentCount(
        CImmersiveShellCreationBehavior *this,
        unsigned int *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v3 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = 148;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x361,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
