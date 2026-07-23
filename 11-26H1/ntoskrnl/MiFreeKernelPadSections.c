/*
 * XREFs of MiFreeKernelPadSections @ 0x140D060E4
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MiIsKernelHalPadSection @ 0x1404FA56C (MiIsKernelHalPadSection.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     VslReserveProtectedPages @ 0x140B1E5DC (VslReserveProtectedPages.c)
 */

__int64 __fastcall MiFreeKernelPadSections(_QWORD *BaseOfImage, int a2)
{
  __int64 result; // rax
  int v3; // ebp
  int v5; // r15d
  __int64 v6; // r9
  int NumberOfSections; // esi
  unsigned int *v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // r14
  unsigned int v11; // r8d
  unsigned int v12; // r13d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  PIMAGE_NT_HEADERS v15; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v3 = a2;
  if ( dword_140FBF268 != 2 )
  {
    v15 = 0LL;
    RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v15);
    v5 = 0;
    v6 = 0x7FFFFFFFF8LL;
    result = v15->FileHeader.SizeOfOptionalHeader;
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v8 = (unsigned int *)((char *)&v15->OptionalHeader.Magic + result);
    if ( v15->FileHeader.NumberOfSections )
    {
      do
      {
        result = MiIsKernelHalPadSection((__int64)v8);
        if ( (_DWORD)result )
        {
          result = v8[2];
          v9 = v8[4];
          v10 = v8[3];
          if ( v9 < (unsigned int)result )
            v9 = v8[2];
          ++v5;
          v11 = (v9 + 4095) & 0xFFFFF000;
          v12 = v11 - 1;
          if ( v5 != 1 || dword_140FBF268 != 1 )
          {
            if ( (MiFlags & 0x10000) != 0 )
            {
              VslReserveProtectedPages(0LL, (__int64)BaseOfImage + v10, v11 >> 12, 2u);
              v6 = 0x7FFFFFFFF8LL;
            }
            result = MiFreeInitializationCode(
                       BaseOfImage,
                       (v6 & (((unsigned __int64)BaseOfImage + v10) >> 9)) - 0x98000000000LL,
                       (v6 & (((unsigned __int64)BaseOfImage + (unsigned int)v10 + v12) >> 9)) - 0x98000000000LL,
                       1);
            v6 = 0x7FFFFFFFF8LL;
          }
        }
        v8 += 10;
        --NumberOfSections;
      }
      while ( NumberOfSections );
      v3 = a2;
    }
    if ( (MiFlags & 4) != 0 && (*(_QWORD *)&v3 & 0x1FFFFFLL) != 0 )
      return MiFreeInitializationCode(
               BaseOfImage,
               (v6 & (((unsigned __int64)BaseOfImage + (unsigned int)(v3 - (_DWORD)BaseOfImage)) >> 9))
             - 0x98000000000LL,
               (v6 & (((unsigned __int64)BaseOfImage + ((v3 - (_DWORD)BaseOfImage + 0x1FFFFF) & 0xFFE00000) - 1) >> 9))
             - 0x98000000000LL,
               1);
  }
  return result;
}
