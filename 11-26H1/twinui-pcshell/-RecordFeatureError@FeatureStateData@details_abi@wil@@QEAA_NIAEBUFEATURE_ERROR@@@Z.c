/*
 * XREFs of ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1802D6734
 * Callers:
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x1802D68B0 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800EBDE0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1801161E0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18018E4D0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x1802D70E0 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 */

bool __fastcall wil::details_abi::FeatureStateData::RecordFeatureError(
        RTL_SRWLOCK *this,
        int a2,
        const struct FEATURE_ERROR *a3)
{
  void *v6; // rdi
  _BYTE *v7; // rbx
  _BYTE *v8; // rsi
  _QWORD *v9; // r14
  bool v10; // bl
  unsigned __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  void *v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-B8h]
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  void *v17; // [rsp+58h] [rbp-A8h]
  RTL_SRWLOCK *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[256]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[8]; // [rsp+170h] [rbp+70h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v6 = 0LL;
  v7 = v19;
  v8 = v19;
  v14 = v19;
  v9 = v20;
  v15 = v19;
  v16 = v20;
  v17 = 0LL;
  v12 = 0LL;
  if ( wil::details_abi::SerializedFailure::Serialize(a3, &v12, v19, 0x100uLL) )
    goto LABEL_5;
  if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&v14, v12) )
  {
    v7 = v14;
    v9 = v16;
    if ( wil::details_abi::SerializedFailure::Serialize(a3, &v12, v14, (char *)v16 - (_BYTE *)v14) )
    {
      v6 = v17;
      v8 = v15;
LABEL_5:
      if ( &v7[v12] <= (_BYTE *)v9 )
        v8 = &v7[v12];
      wil::AcquireSRWLockExclusive(v18, this);
      v13 = a2;
      v10 = wil::details_abi::RawUsageIndex::RecordUsage(
              (wil::details_abi::RawUsageIndex *)&this[17],
              &v13,
              4uLL,
              v7,
              v8 - v7,
              1u);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v18);
      if ( v6 )
        MemoryFree(v6);
      return v10;
    }
  }
  if ( v17 )
    MemoryFree(v17);
  return 0;
}
