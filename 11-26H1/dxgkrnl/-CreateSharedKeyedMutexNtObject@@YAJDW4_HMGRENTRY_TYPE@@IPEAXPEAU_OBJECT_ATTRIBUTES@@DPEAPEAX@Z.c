/*
 * XREFs of ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E917C
 * Callers:
 *     DxgkCreateBundleObjectInternal @ 0x14041DAC8 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004D2D8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedKeyedMutexNtObject(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v10; // rsi
  unsigned int v11; // eax
  int v12; // edx
  struct _KTHREAD *v13; // rcx
  __int64 v14; // rdx
  PVOID v15; // rcx
  DXGKEYEDMUTEX *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // eax
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+20h] BYREF

  v7 = a3;
  Object = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( !Current )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 240;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, Current);
  v11 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)v10 + 74) )
    goto LABEL_9;
  v12 = *((_DWORD *)v10[35] + 4 * v11 + 2);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*((_BYTE *)v10[35] + 16 * v11 + 8) & 0x60)
    || (v12 & 0x2000) != 0
    || (v12 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  v13 = v10[35];
  if ( (*((_BYTE *)v13 + 16 * v11 + 8) & 0x1F) != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v14 = v7;
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    WdLogGlobalForLineNumber = 260;
LABEL_10:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    goto LABEL_11;
  }
  v17 = (DXGKEYEDMUTEX *)*((_QWORD *)v13 + 2 * v11);
  if ( !v17 )
    goto LABEL_9;
  if ( (*((_DWORD *)v17 + 43) & 1) == 0 )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_10;
  }
  DXGKEYEDMUTEX::AcquireReference(v17);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  LOBYTE(v18) = 1;
  LOBYTE(v19) = a1;
  v20 = ObCreateObject(v19, g_pDxgkSharedKeyedMutexObjectType, a5, v18, 0LL, 8, 0, 0, &Object);
  v7 = v20;
  if ( v20 >= 0 )
  {
    *(_QWORD *)Object = v17;
    v15 = Object;
    goto LABEL_13;
  }
  if ( Object )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 296;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 296LL, 0LL, 0LL, 0LL, 0LL);
  }
  WdLogSingleEntry2(3LL, v10, v7);
  WdLogGlobalForLineNumber = 299;
  DXGKEYEDMUTEX::ReleaseReference(v17);
LABEL_11:
  v15 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v15 = 0LL;
  }
LABEL_13:
  *a7 = v15;
  return (unsigned int)v7;
}
