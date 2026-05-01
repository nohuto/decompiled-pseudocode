/*
 * XREFs of ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x18016E100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CClassicWindowManager::SetCloak(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v8; // r15
  unsigned __int64 i; // rdi
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+28h] [rbp-28h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v18[0] = 0LL;
  if ( (a4 & 1) == 0 )
    goto LABEL_20;
  v18[0] = 0LL;
  v18[1] = 0LL;
  v8 = 0LL;
  for ( i = 0LL; i < *(_QWORD *)(a1 + 104); ++i )
  {
    v18[2] = 0LL;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i);
    v18[3] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v17 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
           v10,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v17) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 192LL))(v17, a2) )
    {
      v11 = 0;
    }
    else
    {
      v11 = -1;
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v11 )
    {
      v8 = i;
      v13 = 0;
      goto LABEL_15;
    }
  }
  v13 = -2147319765;
LABEL_15:
  if ( v13 >= 0 )
  {
    v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 96) + 8 * v8);
    v13 = (**v16)(v16, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, v18);
    if ( v13 >= 0 )
LABEL_20:
      v13 = (*(__int64 (__fastcall **)(PVOID, __int64, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 24LL))(
              CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
              a2,
              a3 != 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v13;
}
