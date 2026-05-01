/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18003CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rdi
  char *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v6 = a2;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
  {
    v11 = -2147417842;
    v12 = 874LL;
    goto LABEL_12;
  }
  if ( (unsigned int)v6 >= 0x94 )
  {
    v11 = -2147483637;
    v12 = 875LL;
    goto LABEL_12;
  }
  v8 = (char *)this + 40;
  v9 = *((_DWORD *)&off_18070B6A0 + 8 * v6 + 2);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      v8 = (char *)this + 48;
    }
    else if ( (v9 & 8) != 0 )
    {
      v8 = (char *)this + 56;
    }
    else
    {
      v8 = (char *)this + 64;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)v8 + 24LL))(
          *(_QWORD *)v8,
          *(&off_18070B6A0 + 4 * v6),
          a3,
          a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35A,
      (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v10,
      v14);
    v12 = 876LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)v11,
      v14);
    return v11;
  }
  return 0LL;
}
