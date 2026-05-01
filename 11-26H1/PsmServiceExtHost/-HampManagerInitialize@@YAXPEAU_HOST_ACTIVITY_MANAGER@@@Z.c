/*
 * XREFs of ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BCA0
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800801E0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CemRcTableInitialize @ 0x180049464 (CemRcTableInitialize.c)
 *     ?HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x18007E874 (-HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18008B868 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampManagerInitialize(struct _HOST_ACTIVITY_MANAGER *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi

  memset_0(a1, 0, 0x3E0uLL);
  *(__m128i *)&HampNextHandleValues = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  xmmword_1800E24B0 = *(_OWORD *)&HampNextHandleValues;
  xmmword_1800E24C0 = *(_OWORD *)&HampNextHandleValues;
  xmmword_1800E24D0 = *(_OWORD *)&HampNextHandleValues;
  CempLockInitialize((__int64)a1);
  v2 = (_QWORD *)((char *)a1 + 16);
  v3 = 7LL;
  do
  {
    CemRcTableInitialize((__int64)HampClientDestroy, v2);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  CemRcTableInitialize((__int64)HampActDestroy, (_QWORD *)a1 + 55);
  HamRcRootInitialize(
    (void (*)(struct _CEM_RC_OBJECT *))HampSessionDestroy,
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352));
  *((_QWORD *)a1 + 63) = (char *)a1 + 496;
  *((_QWORD *)a1 + 62) = (char *)a1 + 496;
  memset_0((char *)a1 + 576, 0, 0x68uLL);
  *((_QWORD *)a1 + 72) = a1;
  *((_DWORD *)a1 + 163) = 300000;
  *((_DWORD *)a1 + 164) = 30000;
  *((_QWORD *)a1 + 76) = 0LL;
  *((_QWORD *)a1 + 79) = 0LL;
  *((_QWORD *)a1 + 77) = 0LL;
  *((_QWORD *)a1 + 78) = 0LL;
  *((_QWORD *)a1 + 75) = a1;
  *(_OWORD *)((char *)a1 + 520) = 0LL;
  *(_OWORD *)((char *)a1 + 536) = 0LL;
  memset_0((char *)a1 + 688, 0, 0x68uLL);
  *((_QWORD *)a1 + 85) = a1;
  CemRcTableInitialize((__int64)HampWakeContextQueueDestroy, (_QWORD *)a1 + 89);
  *((_QWORD *)a1 + 95) = 0LL;
  *((_QWORD *)a1 + 96) = 0LL;
  CempLockInitialize((__int64)a1 + 696);
  *((_DWORD *)a1 + 194) = 10000;
  *((_DWORD *)a1 + 195) = 10000;
  memset_0((char *)a1 + 792, 0, 0x68uLL);
  CempLockInitialize((__int64)a1 + 792);
  HamRcRootInitialize(
    (void (*)(struct _CEM_RC_OBJECT *))HampHostIdStoreSessionDestroy,
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 808));
  *((_QWORD *)a1 + 119) = (char *)a1 + 944;
  *((_QWORD *)a1 + 118) = (char *)a1 + 944;
  *((_OWORD *)a1 + 56) = xmmword_1800BFF00;
  *((_OWORD *)a1 + 57) = xmmword_1800BFF10;
  *((_QWORD *)a1 + 116) = 1000LL;
  *((_DWORD *)a1 + 242) = 900000;
  *((_DWORD *)a1 + 246) ^= ((unsigned __int8)HampSystemGetQuiesceSerializationConfig() ^ (unsigned __int8)*((_DWORD *)a1 + 246)) & 3;
}
