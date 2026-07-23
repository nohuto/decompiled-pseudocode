/*
 * XREFs of deflate @ 0x14062A8EC
 * Callers:
 *     RtlCompressBufferDeflateInternal @ 0x140627B78 (RtlCompressBufferDeflateInternal.c)
 * Callees:
 *     deflateStateCheck @ 0x14062AD64 (deflateStateCheck.c)
 *     deflate_huff @ 0x14062B310 (deflate_huff.c)
 *     deflate_rle @ 0x14062B480 (deflate_rle.c)
 *     deflate_stored @ 0x14062BD90 (deflate_stored.c)
 *     flush_pending @ 0x14062C544 (flush_pending.c)
 *     adler32_z @ 0x14063816C (adler32_z.c)
 *     _tr_stored_block @ 0x14063910C (_tr_stored_block.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall deflate(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int16 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
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
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 == 666 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_12;
  }
  else
  {
    if ( v5 == 42 )
    {
      if ( *(_DWORD *)(v3 + 44) )
      {
        if ( *(int *)(v3 + 256) >= 2 || (v6 = *(_DWORD *)(v3 + 252), v6 < 2) )
        {
          v7 = 0;
          v8 = 32;
        }
        else if ( v6 >= 6 )
        {
          if ( v6 == 6 )
          {
            v7 = 128;
            v8 = 160;
          }
          else
          {
            v7 = 192;
            v8 = 224;
          }
        }
        else
        {
          v7 = 64;
          v8 = 96;
        }
        v9 = v7 | ((*(_DWORD *)(v3 + 152) << 12) - 30720);
        if ( *(_DWORD *)(v3 + 228) )
          v9 = v8 | ((*(_DWORD *)(v3 + 152) << 12) - 30720);
        v10 = 31 * (v9 / 0x1F + 1);
        *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = BYTE1(v10);
        v11 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v11;
        *(_BYTE *)(v11 + *(_QWORD *)(v3 + 16)) = v10;
        v12 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v12;
        if ( *(_DWORD *)(v3 + 228) )
        {
          v13 = *(_WORD *)(a1 + 78);
          *(_BYTE *)(v12 + *(_QWORD *)(v3 + 16)) = HIBYTE(v13);
          v14 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v14;
          *(_BYTE *)(v14 + *(_QWORD *)(v3 + 16)) = v13;
          v15 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v15;
          LOBYTE(v13) = *(_DWORD *)(a1 + 76);
          *(_BYTE *)(v15 + *(_QWORD *)(v3 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
          v16 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v16;
          *(_BYTE *)(v16 + *(_QWORD *)(v3 + 16)) = v13;
          ++*(_DWORD *)(v3 + 40);
        }
        *(_DWORD *)(a1 + 76) = adler32_z(0LL, 0LL);
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
      if ( *(_DWORD *)(v3 + 252) )
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
          v17 = guard_dispatch_icall_no_overrides(v3, 4LL);
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
