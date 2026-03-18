/*
 * XREFs of ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x14010AB30
 * Callers:
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401C5DA8 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401C5EBC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall Gre::MapViewOfSectionObj::Map(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // r14
  __int64 CurrentProcess; // rax
  int v11; // eax
  int v12; // edi
  char result; // al
  int (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *, int, int, int, __int64); // rax
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  PEPROCESS Process; // [rsp+68h] [rbp-8h] BYREF
  __int64 v30; // [rsp+90h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 40) != 5 )
    return 0;
  v9 = a5;
  v30 = 0LL;
  v28 = *a5;
  switch ( a3 )
  {
    case 0:
      CurrentProcess = PsGetCurrentProcess(a1, 0LL);
      v27 = 2;
      goto LABEL_5;
    case 1:
      CurrentProcess = PsGetCurrentProcess(a1, (unsigned int)(a3 - 1));
      v27 = 4;
LABEL_5:
      *(_QWORD *)(a1 + 24) = CurrentProcess;
      v11 = MmMapViewOfSection(a2, CurrentProcess, a1 + 16, 0LL, a4, &v28, &v30, 2, 0x400000, v27);
LABEL_6:
      v12 = v11;
      break;
    case 2:
      CurrentThread = GreGetCurrentThread();
      v26 = UMPDGetThreadClientPID(CurrentThread, v25);
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v26, &Process) < 0 )
        return 0;
      v12 = MmMapViewOfSection(a2, Process, a1 + 16, 0LL, a4, &v28, &v30, 2, 0x400000, 4);
      ObfDereferenceObject(Process);
      break;
    case 3:
      v11 = MmMapViewInSessionSpaceEx(a2, a1 + 16, &v30, a5, 0LL);
      goto LABEL_6;
    case 4:
      v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, (unsigned int)(a3 - 3)) + 24) + 1448LL);
      if ( !v14 )
        return 0;
      if ( v14() < 0 )
        return 0;
      v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24) + 1480LL);
      if ( !v17 || v17() < 0 )
        return 0;
      v20 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 24) + 1456LL);
      if ( !v20 || !v20() )
        goto LABEL_8;
      v23 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *, int, int, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 24) + 1488LL);
      if ( v23 )
      {
        v11 = v23(a2, a1 + 16, 0LL, 0LL, &v28, &v30, 2, 0x400000, 2, a1);
        goto LABEL_6;
      }
      v12 = -1073741637;
      break;
    default:
      return 0;
  }
  if ( v12 >= 0 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 8) = *v9 - v28;
    *(_QWORD *)(a1 + 32) = v30;
    result = 1;
    *(_DWORD *)(a1 + 40) = a3;
    return result;
  }
  return 0;
}
