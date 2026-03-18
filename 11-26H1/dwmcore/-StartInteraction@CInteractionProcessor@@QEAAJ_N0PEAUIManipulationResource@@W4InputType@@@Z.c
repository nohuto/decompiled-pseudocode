/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801CCA78
 * Callers:
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z @ 0x1801CCA10 (-StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z @ 0x1801CCA40 (-StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180227F40 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::StartInteraction(_QWORD *a1, __int64 a2, char a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  int v7; // ecx
  char v10; // bp
  bool v11; // zf
  bool v12; // si
  int v13; // r15d
  char v14; // r14
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // al
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // rcx
  char v31; // al

  v6 = 0;
  v7 = *((_DWORD *)a1 + 196);
  v10 = a2;
  if ( v7 != 2 )
  {
    v29 = v7 - 3;
    if ( (_BYTE)a2 )
    {
      if ( v29 > 1 )
        *((_DWORD *)a1 + 196) = 3;
    }
    else if ( v29 > 1 )
    {
      *((_DWORD *)a1 + 196) = 1;
      goto LABEL_3;
    }
  }
  v10 = 1;
LABEL_3:
  v11 = (a1[158] & 8) == 0;
  *((_DWORD *)a1 + 317) = 0;
  v12 = !v11 && !v7 && *((_DWORD *)a1 + 196);
  v13 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a4 + 48LL))(a4) )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 64LL))(a4);
  if ( a5 == 1 )
  {
    v14 = 2 * a3;
    v15 = *((_BYTE *)a1 + 148) & 0xFD;
    *((_DWORD *)a1 + 38) = v13;
    v16 = *a1;
    *((_BYTE *)a1 + 148) = v14 | v15 | 1;
    if ( !v16 )
      return (unsigned int)-2147019873;
    if ( v12 )
    {
      LOBYTE(a2) = v12;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 80LL))(v16, a2);
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
    v17 = a1[20];
    v18 = v14 | *((_BYTE *)a1 + 308) & 0xFD;
    *((_DWORD *)a1 + 78) = v13;
    *((_BYTE *)a1 + 308) = v18 | 1;
    if ( !v17 )
      return (unsigned int)-2147019873;
    if ( v12 )
    {
      LOBYTE(a2) = v12;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 80LL))(v17, a2);
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[20] + 64LL))(a1[20]);
    if ( !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
      return v6;
    goto LABEL_52;
  }
  if ( a5 == 2 )
  {
    v24 = *a1;
    v25 = (2 * a3) | *((_BYTE *)a1 + 148) & 0xFD;
    *((_DWORD *)a1 + 38) = v13;
    *((_BYTE *)a1 + 148) = v25 | 1;
    if ( v24 )
    {
      if ( v12 )
      {
        LOBYTE(a2) = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 80LL))(v24, a2);
      }
      if ( v10 )
      {
        v23 = *(void (**)(void))(*(_QWORD *)*a1 + 64LL);
        goto LABEL_25;
      }
      return v6;
    }
    return (unsigned int)-2147019873;
  }
  if ( a5 != 3 )
  {
    if ( a5 != 4 )
    {
      if ( a5 != 6 )
        return v6;
      v26 = a1[60];
      v27 = (2 * a3) | *((_BYTE *)a1 + 628) & 0xFD;
      *((_DWORD *)a1 + 158) = v13;
      *((_BYTE *)a1 + 628) = v27 | 1;
      if ( !v26 )
        return (unsigned int)-2147019873;
      if ( v12 )
      {
        LOBYTE(a2) = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 80LL))(v26, a2);
      }
      if ( v10 )
      {
        v22 = a1[60];
        goto LABEL_24;
      }
      return v6;
    }
    if ( !CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
      return v6;
    v14 = 2 * a3;
LABEL_52:
    v30 = a1[40];
    v31 = v14 | *((_BYTE *)a1 + 468) & 0xFD;
    *((_DWORD *)a1 + 118) = v13;
    *((_BYTE *)a1 + 468) = v31 | 1;
    if ( v30 )
    {
      if ( v12 )
      {
        LOBYTE(v28) = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 80LL))(v30, v28);
      }
      if ( v10 )
      {
        v22 = a1[40];
        goto LABEL_24;
      }
      return v6;
    }
    return (unsigned int)-2147019873;
  }
  v20 = a1[20];
  v21 = (2 * a3) | *((_BYTE *)a1 + 308) & 0xFD;
  *((_DWORD *)a1 + 78) = v13;
  *((_BYTE *)a1 + 308) = v21 | 1;
  if ( !v20 )
    return (unsigned int)-2147019873;
  if ( v12 )
  {
    LOBYTE(a2) = v12;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 80LL))(v20, a2);
  }
  if ( v10 )
  {
    v22 = a1[20];
LABEL_24:
    v23 = *(void (**)(void))(*(_QWORD *)v22 + 64LL);
LABEL_25:
    v23();
  }
  return v6;
}
