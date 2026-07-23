/*
 * XREFs of MiMapImageInSystemSpace @ 0x14099D80C
 * Callers:
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MiValidateSectionMap @ 0x14099CAFC (MiValidateSectionMap.c)
 *     MiRelocateMapImage @ 0x14099CD1C (MiRelocateMapImage.c)
 *     MiParseComAndCetHeaders @ 0x14099D24C (MiParseComAndCetHeaders.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 a1, char a2, __int64 a3)
{
  ULONG_PTR v6; // r12
  unsigned int v7; // r8d
  unsigned int v8; // edi
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r14
  __int64 SessionId; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  int v14; // ebx
  __int64 result; // rax
  _BYTE v16[40]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  unsigned __int64 v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+68h] [rbp-8h]
  unsigned int v20; // [rsp+6Ch] [rbp-4h]
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+C0h] [rbp+50h] BYREF

  v6 = 0LL;
  memset_0(v16, 0, 0x40uLL);
  *(_QWORD *)a3 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 64LL);
  if ( !v7 )
    return 3221225595LL;
  if ( (a2 & 1) != 0 )
    v8 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v8 = (v7 >> 12) + ((v7 & 0xFFF) != 0);
  v18 = (unsigned __int64)v8 << 12;
  v9 = MiReferenceControlAreaFile(a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v17 = v9 | 1;
  else
    v17 = a1;
  v20 = v20 & 0xFFFFF000 | 2;
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v19 |= 0x20u;
  v20 = v20 & 0x80000FFF | ((SessionId & 0x7FFFF) << 12);
  v21 = 0LL;
  v22 = 0LL;
  v12 = MiSectionControlArea((__int64)v16);
  MiCheckPurgeAndUpMapCount(v12);
  if ( v8 << 12 )
  {
    v13 = (unsigned __int16)v21 + (unsigned __int64)(v8 << 12);
    if ( v13 < (unsigned __int16)v21 || (LODWORD(v21) = v21 & 0xFFFF0000, v13 > v18 - v21) )
    {
      v14 = -1073741793;
      goto LABEL_17;
    }
  }
  else
  {
    LODWORD(v21) = v21 & 0xFFFF0000;
    v13 = v18 - v21;
  }
  v14 = MiInsertInSystemSpace(v13, (__int64)v16, &v21, 1, &v22);
  if ( v14 >= 0 )
  {
    v6 = v22;
    v14 = 0;
    goto LABEL_11;
  }
LABEL_17:
  MiDereferenceControlArea(v12);
LABEL_11:
  MiDereferenceControlAreaFile(a1, v10);
  if ( v14 < 0 )
    return (unsigned int)v14;
  *(_QWORD *)a3 = v6;
  result = 0LL;
  *(_DWORD *)(a3 + 8) = v8;
  return result;
}
