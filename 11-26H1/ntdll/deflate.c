/*
 * XREFs of deflate @ 0x180154300
 * Callers:
 *     RtlCompressBufferDeflateInternal @ 0x180150F4C (RtlCompressBufferDeflateInternal.c)
 * Callees:
 *     deflateStateCheck @ 0x180154778 (deflateStateCheck.c)
 *     deflate_huff @ 0x1801547D4 (deflate_huff.c)
 *     deflate_rle @ 0x180154944 (deflate_rle.c)
 *     deflate_stored @ 0x180155250 (deflate_stored.c)
 *     flush_pending @ 0x1801556B4 (flush_pending.c)
 *     adler32_z @ 0x180155BA4 (adler32_z.c)
 *     _tr_stored_block @ 0x180156B40 (_tr_stored_block.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall deflate(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int16 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int16 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax

  v2 = 0;
  if ( (unsigned int)deflateStateCheck() )
    return 4294967294LL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( !*(_QWORD *)(a1 + 16) || *(_DWORD *)(a1 + 8) && !*(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 32) = "stream error";
    return 4294967294LL;
  }
  if ( !*(_DWORD *)(a1 + 24) )
  {
LABEL_12:
    *(_QWORD *)(a1 + 32) = "buffer error";
    return 4294967291LL;
  }
  *(_DWORD *)(v3 + 64) = 4;
  if ( *(_DWORD *)(v3 + 40) )
  {
    flush_pending(a1);
    if ( !*(_DWORD *)(a1 + 24) )
      goto LABEL_8;
  }
  if ( *(_DWORD *)(v3 + 8) == 666 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_12;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 8) == 42 )
    {
      if ( *(_DWORD *)(v3 + 44) )
      {
        if ( *(int *)(v3 + 256) >= 2 || (v5 = *(_DWORD *)(v3 + 252), v5 < 2) )
        {
          v6 = 0;
          v7 = 32;
        }
        else if ( v5 >= 6 )
        {
          if ( v5 == 6 )
          {
            v6 = 128;
            v7 = 160;
          }
          else
          {
            v6 = 192;
            v7 = 224;
          }
        }
        else
        {
          v6 = 64;
          v7 = 96;
        }
        v8 = v6 | ((*(_DWORD *)(v3 + 152) << 12) - 30720);
        if ( *(_DWORD *)(v3 + 228) )
          v8 = v7 | ((*(_DWORD *)(v3 + 152) << 12) - 30720);
        v9 = 31 * (v8 / 0x1F + 1);
        *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = BYTE1(v9);
        v10 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v10;
        *(_BYTE *)(v10 + *(_QWORD *)(v3 + 16)) = v9;
        v11 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v11;
        if ( *(_DWORD *)(v3 + 228) )
        {
          v12 = *(_WORD *)(a1 + 78);
          *(_BYTE *)(v11 + *(_QWORD *)(v3 + 16)) = HIBYTE(v12);
          v13 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v13;
          *(_BYTE *)(v13 + *(_QWORD *)(v3 + 16)) = v12;
          v14 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v14;
          LOBYTE(v12) = *(_DWORD *)(a1 + 76);
          *(_BYTE *)(v14 + *(_QWORD *)(v3 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
          v15 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v15;
          *(_BYTE *)(v15 + *(_QWORD *)(v3 + 16)) = v12;
          ++*(_DWORD *)(v3 + 40);
        }
        *(_DWORD *)(a1 + 76) = adler32_z(0LL, 0LL, 0LL);
        *(_DWORD *)(v3 + 8) = 113;
        flush_pending(a1);
        if ( *(_DWORD *)(v3 + 40) )
          goto LABEL_8;
      }
      else
      {
        *(_DWORD *)(v3 + 8) = 113;
      }
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
LABEL_32:
      v16 = *(int *)(v3 + 252);
      if ( (_DWORD)v16 )
      {
        v18 = *(_DWORD *)(v3 + 256);
        if ( v18 == 2 )
        {
          v17 = deflate_huff(v3);
        }
        else if ( v18 == 3 )
        {
          v17 = deflate_rle(v3);
        }
        else
        {
          v17 = ((__int64 (__fastcall *)(__int64, __int64))funcs_180154547[2 * v16])(v3, 4LL);
        }
      }
      else
      {
        v17 = deflate_stored(v3, 4LL);
      }
      if ( (unsigned int)(v17 - 2) <= 1 )
        *(_DWORD *)(v3 + 8) = 666;
      if ( (v17 & 0xFFFFFFFD) == 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
          return 0LL;
        goto LABEL_8;
      }
      if ( v17 == 1 )
      {
        tr_stored_block(v3, 0LL, 0LL, 0LL);
        flush_pending(a1);
        if ( !*(_DWORD *)(a1 + 24) )
        {
LABEL_8:
          *(_DWORD *)(v3 + 64) = -1;
          return 0LL;
        }
      }
      goto LABEL_44;
    }
  }
  if ( *(_DWORD *)(v3 + 236) || *(_DWORD *)(v3 + 8) != 666 )
    goto LABEL_32;
LABEL_44:
  if ( *(int *)(v3 + 44) <= 0 )
    return 1LL;
  v19 = *(_WORD *)(a1 + 78);
  *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = HIBYTE(v19);
  v20 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v20;
  *(_BYTE *)(v20 + *(_QWORD *)(v3 + 16)) = v19;
  v21 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v21;
  LOBYTE(v19) = *(_DWORD *)(a1 + 76);
  *(_BYTE *)(v21 + *(_QWORD *)(v3 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
  v22 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v22;
  *(_BYTE *)(v22 + *(_QWORD *)(v3 + 16)) = v19;
  ++*(_DWORD *)(v3 + 40);
  flush_pending(a1);
  v23 = *(_DWORD *)(v3 + 44);
  if ( v23 > 0 )
    *(_DWORD *)(v3 + 44) = -v23;
  LOBYTE(v2) = *(_DWORD *)(v3 + 40) == 0;
  return v2;
}
