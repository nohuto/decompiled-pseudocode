/*
 * XREFs of MiMapImageForEnclaveUse @ 0x140B61ED8
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MmMapViewOfSectionEx @ 0x1404B623C (MmMapViewOfSectionEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 */

__int64 __fastcall MiMapImageForEnclaveUse(ULONG_PTR a1, __int64 a2, char a3, __int64 a4, __int64 *a5)
{
  __int64 result; // rax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // edi
  ULONG_PTR v12; // rbx
  int v13; // [rsp+58h] [rbp-59h]
  PVOID Object; // [rsp+70h] [rbp-41h] BYREF
  __int64 v15; // [rsp+78h] [rbp-39h] BYREF
  __int64 v16; // [rsp+80h] [rbp-31h] BYREF
  __int128 v17; // [rsp+88h] [rbp-29h] BYREF
  _OWORD v18[3]; // [rsp+98h] [rbp-19h] BYREF

  Object = 0LL;
  memset(v18, 0, sizeof(v18));
  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 4, (__int64)MmSectionObjectType, a3, 0x6D566D4Du, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = Object;
    v9 = MiSectionControlArea((__int64)Object);
    v10 = v9;
    if ( (v8[14] & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 40) & 0xFFFFFFFFFFFFFFF8uLL) <= 0x7FFFFFFFFFFFFFF8LL )
      {
        v12 = MiReferenceControlAreaFile(v9);
        v11 = MiValidateSectionCreate(v12, (__int64 *)v10, -1, a2, 0x40000000, 4, 0);
        MiDereferenceControlAreaFile(v10, v12);
        if ( v11 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v10 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v18);
          *(_QWORD *)&v17 = 5LL;
          *((_QWORD *)&v17 + 1) = 512LL;
          v11 = MmMapViewOfSectionEx(
                  (ULONG_PTR)v8,
                  PsSecureSystemProcess,
                  a4,
                  (__int64)&v16,
                  (__int64)&v15,
                  0,
                  2,
                  &v17,
                  1,
                  0,
                  0LL,
                  v13,
                  0x2000000);
          KiUnstackDetachProcess((__int64)v18, 0);
          *a5 = v10;
          goto LABEL_10;
        }
      }
      v11 = -1073740760;
    }
    else
    {
      v11 = -1073741751;
    }
LABEL_10:
    ObfDereferenceObjectWithTag(v8, 0x6D566D4Du);
    return (unsigned int)v11;
  }
  return result;
}
