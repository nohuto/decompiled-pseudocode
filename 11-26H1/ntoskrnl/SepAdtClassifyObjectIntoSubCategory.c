/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x140920410
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     SepAuditingEnabledForSubcategory @ 0x140469B30 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     SepIsRemovableStorageDevice @ 0x140AFA9F0 (SepIsRemovableStorageDevice.c)
 */

__int16 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, unsigned __int16 *a2, char a3, char a4)
{
  POBJECT_TYPE *v5; // rax
  unsigned __int16 *v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  SIZE_T v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rsi
  unsigned __int16 *v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  SIZE_T v16; // rax
  int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // r10
  char IsRemovableStorageDevice; // al
  __int16 v21; // r11
  __int16 v22; // cx
  __int16 v23; // r11

  if ( a1 )
  {
    v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
    if ( v5 == CmKeyObjectType )
      return 118;
    if ( v5 != IoFileObjectType )
    {
      if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType && SepAuditingEnabledForSubcategory(129, a3, a4) )
      {
        IsRemovableStorageDevice = SepIsRemovableStorageDevice(v19);
        v22 = 119;
        if ( IsRemovableStorageDevice == 1 )
          return v21;
        return v22;
      }
      return 119;
    }
    if ( SepAuditingEnabledForSubcategory(129, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v18 + 8)) == 1 )
    {
      return v23;
    }
    return 117;
  }
  if ( !a2 )
    return 119;
  v7 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v8 = (unsigned __int64)*a2 >> 1;
  PsGetCurrentServerSiloGlobals();
  v9 = 4LL;
  if ( v8 <= 4 )
    v9 = v8;
  v10 = RtlCompareMemory(v7, L"File", 2 * v9) >> 1;
  if ( v10 >= v9 )
    v11 = v8 - 4;
  else
    v11 = v7[v10] - aFile_1[v10];
  if ( !v11 )
    return 117;
  v12 = *a2;
  v13 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v14 = v12 >> 1;
  PsGetCurrentServerSiloGlobals();
  v15 = 3LL;
  if ( v14 <= 3 )
    v15 = v14;
  v16 = RtlCompareMemory(v13, L"Key", 2 * v15) >> 1;
  if ( v16 >= v15 )
    v17 = v14 - 3;
  else
    v17 = v13[v16] - aKey_0[v16];
  return (v17 != 0) + 118;
}
