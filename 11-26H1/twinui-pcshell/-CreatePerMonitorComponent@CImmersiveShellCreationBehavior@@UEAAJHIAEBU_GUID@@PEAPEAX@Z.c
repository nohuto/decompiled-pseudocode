/*
 * XREFs of ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x180184870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x180184A38 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreatePerMonitorComponent(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  __int64 v6; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  char *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  char *v18; // rcx
  int v19; // eax
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  *a5 = 0LL;
  v9 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38D,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  if ( !a2 )
  {
    if ( (unsigned int)v6 < 2 )
    {
      v18 = (char *)this + 40;
      v19 = *((_DWORD *)&unk_1808D6598 + 8 * v6);
      if ( (v19 & 4) == 0 )
      {
        if ( (v19 & 2) != 0 )
        {
          v18 = (char *)this + 48;
        }
        else if ( (v19 & 8) != 0 )
        {
          v18 = (char *)this + 56;
        }
        else
        {
          v18 = (char *)this + 64;
        }
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, GUID *, const struct _GUID *, void **))(**(_QWORD **)v18 + 24LL))(
              *(_QWORD *)v18,
              (&off_1808D6590)[4 * v6],
              a4,
              a5);
      v15 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35A,
          (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
          (const char *)(unsigned int)v20);
        v16 = 918LL;
        goto LABEL_11;
      }
      return 0LL;
    }
    v16 = 917LL;
LABEL_25:
    v15 = -2147483637;
    goto LABEL_11;
  }
  if ( (unsigned int)v6 >= 9 )
  {
    v16 = 912LL;
    goto LABEL_25;
  }
  v11 = 4LL * (unsigned int)v6;
  v12 = (char *)this + 40;
  v13 = *(_DWORD *)((char *)&unk_1808D65D8 + v11 * 8);
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      v12 = (char *)this + 48;
    }
    else if ( (v13 & 8) != 0 )
    {
      v12 = (char *)this + 56;
    }
    else
    {
      v12 = (char *)this + 64;
    }
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, const struct _GUID *, void **))(**(_QWORD **)v12 + 24LL))(
          *(_QWORD *)v12,
          (&off_1808D65D0)[v11],
          a4,
          a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35A,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v14);
    v16 = 913LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)v15);
    return v15;
  }
  return 0LL;
}
