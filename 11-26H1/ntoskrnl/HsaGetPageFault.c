/*
 * XREFs of HsaGetPageFault @ 0x1405AC350
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HsaGetPageFault(_QWORD *a1, int *a2, _QWORD *a3, _WORD *a4, _QWORD *a5, __int64 *a6)
{
  unsigned __int64 v6; // r15
  __int64 v8; // r8
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // r14
  int v17; // ebp
  __int128 *v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  int v21; // ecx
  unsigned __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  signed __int32 v29[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 i; // [rsp+30h] [rbp-78h]
  _WORD *v31; // [rsp+38h] [rbp-70h]
  _QWORD *v32; // [rsp+40h] [rbp-68h]
  __int64 *v33; // [rsp+48h] [rbp-60h]
  __int128 v34; // [rsp+50h] [rbp-58h]

  v6 = a1[14];
  v8 = a1[12];
  v10 = (_QWORD *)*a1;
  v31 = a4;
  v32 = a5;
  v11 = v6 >> 4;
  v33 = a6;
  for ( i = v8; ; v8 = i )
  {
    while ( 1 )
    {
      v12 = v10[1028];
      v13 = v10[1030];
      v14 = v13 >> 4;
      v15 = (v13 >> 4) & 0x7FFF;
      if ( v15 != ((v10[1031] >> 4) & 0x7FFFLL) )
        break;
      if ( (v12 & 0x20) == 0 )
        return 0LL;
      if ( (v12 & 0x80u) == 0LL )
      {
        v22 = v10[3] & 0xFFFFFFFFFFFFDFFFuLL;
        v10[3] = v22;
        _InterlockedOr(v29, 0);
        v10[1028] = 32LL;
        _InterlockedOr(v29, 0);
        v10[3] = v22 | 0x6000;
        _InterlockedOr(v29, 0);
        v23 = v31;
        *a2 = -1;
        *v23 = -1;
        *v32 = 0LL;
        *v33 = 32LL;
        *a3 = 0LL;
        return 1LL;
      }
      while ( (v10[1028] & 0x80u) != 0LL )
        ;
    }
    v16 = 0LL;
    v17 = 0;
    if ( (v14 & 0x7FFF) + 1 != (_DWORD)v11 )
      v16 = v14 + 1;
    v18 = (__int128 *)(v8 + 16 * v15);
    while ( 1 )
    {
      v34 = *v18;
      v19 = *((_QWORD *)&v34 + 1);
      v20 = v34;
      if ( v34 != 0 )
        break;
      KeStallExecutionProcessor(0xAu);
      if ( (unsigned int)++v17 > 0x186A0 )
        KeBugCheckEx(0x159u, 0x2000uLL, 0LL, 0LL, 0LL);
    }
    if ( v17 )
      ++dword_140F87700;
    *v18 = 0LL;
    v10[1030] = (16 * v16) ^ (v13 ^ (16 * v16)) & 0xFFFFFFFFFFF8000FuLL;
    _InterlockedOr(v29, 0);
    if ( v20 >> 60 == 1 && (v20 & 0x24020000000000LL) != 0x20000000000LL )
      break;
  }
  if ( (v20 & 0x100000000000000LL) != 0 )
    v21 = WORD1(v34);
  else
    v21 = -1;
  *a2 = v21;
  *v31 = WORD2(v20) & 0x1FF;
  *v32 = v19;
  *a3 = (unsigned __int16)v20;
  v25 = (2 * ((v20 >> 53) & 1)) | 1;
  if ( (v20 & 0x4000000000000LL) == 0 )
    v25 = 2 * ((v20 >> 53) & 1);
  v26 = v25 | 4;
  if ( (v20 & 0x2000000000000LL) == 0 )
    v26 = v25;
  v27 = v26 | 8;
  if ( (v20 & 0x40000000000000LL) != 0 )
    v27 = v26;
  v28 = v27 | 0x10;
  if ( (v20 & 0x20000000000LL) == 0 )
    v28 = v27;
  *v33 = v28;
  return 1LL;
}
