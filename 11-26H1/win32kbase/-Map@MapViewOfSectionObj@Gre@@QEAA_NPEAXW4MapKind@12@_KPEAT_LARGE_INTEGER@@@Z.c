/*
 * XREFs of ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x140142390
 * Callers:
 *     ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401B46EC (-AllocateSharedSection@@YAJKPEAPEAX00@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401BEC68 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall Gre::MapViewOfSectionObj::Map(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  char result; // al
  int (*v14)(void); // rax
  __int64 v15; // rcx
  int (*v16)(void); // rax
  __int64 v17; // rcx
  unsigned int (*v18)(void); // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *, int, int, int, __int64); // rax
  __int64 CurrentProcess; // rax
  struct _GRETHREAD *CurrentThread; // rax
  signed int v23; // eax
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  PEPROCESS Process; // [rsp+68h] [rbp-8h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+30h] BYREF

  if ( *(_DWORD *)(a1 + 32) != 6 )
    return 0;
  v9 = a5;
  v26 = 0LL;
  v24 = *a5;
  switch ( a3 )
  {
    case 0:
      CurrentProcess = PsGetCurrentProcess(a1);
      v11 = MmMapViewOfSection(a2, CurrentProcess, a1 + 16, 0LL, a4, &v24, &v26, 2, 0x400000, 2);
      goto LABEL_5;
    case 1:
      v10 = PsGetCurrentProcess(a1);
      v11 = MmMapViewOfSection(a2, v10, a1 + 16, 0LL, a4, &v24, &v26, 2, 0x400000, 4);
LABEL_5:
      v12 = v11;
      break;
    case 2:
      CurrentThread = GreGetCurrentThread(a1, (unsigned int)(a3 - 2));
      v23 = (unsigned int)UMPDGetThreadClientPID((__int64)CurrentThread);
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v23, &Process) < 0 )
        return 0;
      v12 = MmMapViewOfSection(a2, Process, a1 + 16, 0LL, a4, &v24, &v26, 2, 0x400000, 4);
      ObfDereferenceObject(Process);
      break;
    case 3:
    case 4:
      v11 = MmMapViewInSessionSpaceEx(a2, a1 + 16, &v26, a5, 0LL);
      goto LABEL_5;
    case 5:
      v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1408LL);
      if ( !v14 )
        return 0;
      if ( v14() < 0 )
        return 0;
      v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15) + 24) + 1440LL);
      if ( !v16 || v16() < 0 )
        return 0;
      v18 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 24) + 1416LL);
      if ( !v18 || !v18() )
        goto LABEL_7;
      v20 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *, int, int, int, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 24) + 1448LL);
      if ( v20 )
      {
        v11 = v20(a2, a1 + 16, 0LL, 0LL, &v24, &v26, 2, 0x400000, 2, a1);
        goto LABEL_5;
      }
      v12 = -1073741637;
      break;
    default:
      return 0;
  }
  if ( v12 >= 0 )
  {
LABEL_7:
    *(_QWORD *)(a1 + 8) = *v9 - v24;
    *(_QWORD *)(a1 + 24) = v26;
    result = 1;
    *(_DWORD *)(a1 + 32) = a3;
    return result;
  }
  return 0;
}
