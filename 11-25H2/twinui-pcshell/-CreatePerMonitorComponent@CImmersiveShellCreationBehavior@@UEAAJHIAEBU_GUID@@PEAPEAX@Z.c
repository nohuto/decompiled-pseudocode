/*
 * XREFs of ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18018C7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018C9B0 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  GUID **v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  GUID **v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  *a5 = 0LL;
  v9 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x397,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
  if ( !a2 )
  {
    if ( (unsigned int)v6 < 2 )
    {
      v18 = &(&off_1808964D0)[4 * v6];
      v19 = *((_DWORD *)v18 + 2);
      if ( (v19 & 4) != 0 )
      {
        v20 = 40LL;
      }
      else if ( (v19 & 2) != 0 )
      {
        v20 = 48LL;
      }
      else
      {
        v20 = (-(__int64)((v19 & 8) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 64;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, GUID *, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v20)
                                                                                     + 24LL))(
              *(_QWORD *)((char *)this + v20),
              *v18,
              a4,
              a5);
      v15 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x364,
          (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
          (const char *)(unsigned int)v21);
        v16 = 928LL;
        goto LABEL_9;
      }
      return 0LL;
    }
    v16 = 927LL;
LABEL_23:
    v15 = -2147483637;
    goto LABEL_9;
  }
  if ( (unsigned int)v6 >= 9 )
  {
    v16 = 922LL;
    goto LABEL_23;
  }
  v11 = &(&off_180896510)[4 * (unsigned int)v6];
  v12 = *((_DWORD *)v11 + 2);
  if ( (v12 & 4) != 0 )
  {
    v13 = 40LL;
  }
  else if ( (v12 & 2) != 0 )
  {
    v13 = 48LL;
  }
  else
  {
    v13 = (-(__int64)((v12 & 8) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 64;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, GUID *, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v13)
                                                                                 + 24LL))(
          *(_QWORD *)((char *)this + v13),
          *v11,
          a4,
          a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x364,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v14);
    v16 = 923LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)v15);
    return v15;
  }
  return 0LL;
}
