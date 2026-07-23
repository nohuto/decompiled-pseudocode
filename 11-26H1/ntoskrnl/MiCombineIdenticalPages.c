/*
 * XREFs of MiCombineIdenticalPages @ 0x140B4BC24
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiCombineWorkingSet @ 0x140709248 (MiCombineWorkingSet.c)
 *     MiCombiningInProgress @ 0x1407094C0 (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiCombineIdenticalPages(ULONG *a1, ULONG_PTR a2, int a3, ULONG_PTR a4, char a5, _QWORD *a6)
{
  char *v9; // rsi
  PVOID v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v16; // rdi
  signed __int32 v17; // eax
  signed __int32 v18; // edx
  signed __int32 v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  PVOID v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG *v26; // [rsp+58h] [rbp-A8h]
  _QWORD *v27; // [rsp+60h] [rbp-A0h]
  _QWORD v28[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v29; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v30[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v32[12]; // [rsp+D0h] [rbp-30h] BYREF
  char *v33; // [rsp+130h] [rbp+30h]
  _QWORD *v34; // [rsp+138h] [rbp+38h]
  _DWORD *v35; // [rsp+140h] [rbp+40h]
  int v36; // [rsp+148h] [rbp+48h]
  int v37; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v38[128]; // [rsp+160h] [rbp+60h] BYREF
  signed __int32 v39; // [rsp+1E0h] [rbp+E0h]
  __int128 v40; // [rsp+210h] [rbp+110h] BYREF
  __int128 v41; // [rsp+220h] [rbp+120h]

  v26 = a1;
  v27 = a6;
  v40 = 0LL;
  v41 = 0LL;
  memset_0(v31, 0, 0x150uLL);
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  Object = 0LL;
  memset(v30, 0, sizeof(v30));
  v29 = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 2) != 0 )
  {
    v12 = -1LL;
    if ( a4 )
      v12 = a4;
    a4 = v12;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140FBF208 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v13 = ObpReferenceObjectByHandleWithTag(a2, 1, (__int64)ExEventObjectType, a5, 0x62436D4Du, &v23, 0LL, 0LL),
        v10 = v23,
        v11 = v13,
        v13 >= 0) )
  {
    if ( a4 )
    {
      v14 = ObpReferenceObjectByHandleWithTag(a4, 24, (__int64)PsProcessType, a5, 0x62436D4Du, &Object, 0LL, 0LL);
      v9 = (char *)Object;
      v11 = v14;
      if ( v14 < 0 )
      {
LABEL_30:
        if ( v9 )
        {
          KiUnstackDetachProcess((__int64)v30, 0);
          ObfDereferenceObjectWithTag(v9, 0x62436D4Du);
        }
        goto LABEL_32;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v30);
    }
    CurrentThread = KeGetCurrentThread();
    v16 = (__int64)(v26 + 4414);
    if ( (a3 & 1) == 0 || v26 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v16, v32, 1);
      v28[0] = qword_140E361A8;
      v28[1] = qword_140E361E0;
      v34 = v28;
      v35 = v25;
      v32[11] = &v40;
      v17 = dword_140E2EBDC;
      v25[0] = 0;
      v25[1] = -1;
      v36 = 2;
      v31[0] = v16;
      v31[1] = (__int64)v10;
      v37 = a3;
      do
      {
        v18 = v17 + 1;
        v19 = v17;
        if ( (unsigned int)(v17 + 1) < 2 )
          v18 = 2;
        v39 = v18;
        v17 = _InterlockedCompareExchange(&dword_140E2EBDC, v18, v17);
      }
      while ( v17 != v19 );
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
        3,
        0,
        (__int64)&v29);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)v38, (__int64)&v29, 8, 0LL) )
      {
        if ( (a3 & 2) != 0 )
        {
          v33 = v9 + 1024;
          v20 = MiCombineWorkingSet((__int64)v31);
        }
        else
        {
          v33 = 0LL;
          v20 = MiCombineAllPhysicalMemory(v31);
        }
        v11 = v20;
        MiDeleteUltraThreadContext((__int64)v38);
        *v27 = v40;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 384));
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 376), *((unsigned __int64 *)&v40 + 1));
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 360), v41);
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 368), *((unsigned __int64 *)&v41 + 1));
      }
      else
      {
        v11 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v16, v32, 0);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v21);
    }
    else
    {
      v11 = -1073741637;
    }
    goto LABEL_30;
  }
LABEL_32:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x62436D4Du);
  return v11;
}
