/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x140A9B040
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1DecompressChunkNewThread @ 0x140205048 (LZNT1DecompressChunkNewThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     LZNT1DecompressChunk @ 0x1407362D0 (LZNT1DecompressChunk.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        _BYTE *a8)
{
  __int16 *v8; // rdi
  char *v9; // rsi
  unsigned __int64 v10; // r13
  int v11; // ebx
  __int16 v12; // ax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int16 *v15; // rcx
  int v16; // r12d
  unsigned int v17; // edx
  __int16 *v18; // r15
  unsigned int v19; // ecx
  bool v20; // zf
  _BYTE *v21; // r8
  _BYTE *v22; // rdi
  unsigned int v23; // eax
  _BYTE *v24; // rdx
  void *v25; // rcx
  size_t v27; // r8
  struct _LIST_ENTRY *v28; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+38h] [rbp-30h] BYREF
  __int64 v30; // [rsp+50h] [rbp-18h] BYREF
  int v31; // [rsp+B0h] [rbp+48h]
  unsigned int Size; // [rsp+B8h] [rbp+50h]
  int v33; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+60h] BYREF

  Size = a2;
  v31 = (int)a1;
  v8 = a3;
  v28 = (struct _LIST_ENTRY *)&a1[a2];
  v9 = a1;
  v34 = 0;
  v10 = (unsigned __int64)a3 + a4;
  memset(&Event, 0, sizeof(Event));
  v11 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *v8;
  v30 = 1LL;
  v13 = a5;
  while ( 1 )
  {
    v33 = 4096;
    v14 = (v12 & 0xFFFu) + 3;
    if ( v13 < 0x1000 )
    {
      v16 = a6;
      v17 = Size;
      while ( 1 )
      {
        v18 = (__int16 *)((char *)v8 + (unsigned int)v14);
        if ( (unsigned __int64)v18 > v10 )
          goto LABEL_39;
        v19 = 4096 - v13;
        if ( 4096 - v13 >= v17 )
          v19 = v17;
        v34 = v19;
        if ( v12 >= 0 )
          break;
        if ( v13 || v19 != 4096 )
        {
          v21 = v8 + 1;
          v22 = a8;
          v11 = LZNT1DecompressChunk(a8, a8 + 4096, v21, (__int64)v18, &v33);
          v23 = v33;
          if ( v11 < 0 )
            goto LABEL_35;
          v24 = &v22[v13];
          v25 = v9;
          if ( v33 - v13 < v34 )
          {
            memmove(v9, v24, v33 - v13);
            LODWORD(v9) = v33 - v13 + (_DWORD)v9;
LABEL_24:
            *a7 = (_DWORD)v9 - v31;
            goto LABEL_25;
          }
          v27 = v34;
          goto LABEL_33;
        }
        if ( v16 )
        {
          v11 = LZNT1DecompressChunkNewThread(
                  (__int64)&Event,
                  (unsigned __int64)v9,
                  v28,
                  (unsigned __int64)(v8 + 1),
                  (__int64)v18,
                  v16);
          if ( v11 < 0 )
            goto LABEL_34;
          v34 = v16;
        }
        else
        {
          v11 = LZNT1DecompressChunk(v9, v28, (_BYTE *)v8 + 2, (__int64)v18, &v34);
          if ( v11 < 0 )
          {
LABEL_34:
            v23 = v34;
LABEL_35:
            *a7 = v23;
            goto LABEL_25;
          }
        }
LABEL_17:
        v13 = 0;
        v9 += v34;
        v20 = Size == v34;
        v17 = Size - v34;
        Size -= v34;
        if ( v20 )
          goto LABEL_24;
        v8 = v18;
        if ( (unsigned __int64)v18 > v10 - 2 )
          goto LABEL_24;
        v12 = *v18;
        if ( !*v18 )
          goto LABEL_24;
        v33 = 4096;
        LODWORD(v14) = (v12 & 0xFFF) + 3;
      }
      v27 = v19;
      if ( (unsigned __int64)v8 + v19 + v13 + 2 > v10 )
        break;
      v25 = v9;
      v24 = (char *)v8 + v13 + 2;
LABEL_33:
      memmove(v25, v24, v27);
      goto LABEL_17;
    }
    v15 = (__int16 *)((char *)v8 + v14);
    if ( (unsigned __int64)v15 > v10 )
      break;
    v13 -= 4096;
    v8 = v15;
    if ( (unsigned __int64)v15 <= v10 - 2 )
    {
      v12 = *v15;
      if ( *v15 )
        continue;
    }
    *a7 = 0;
    goto LABEL_25;
  }
LABEL_39:
  v11 = -1073741246;
  *a7 = (unsigned int)v8;
LABEL_25:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v11 >= 0 && v30 < 0 )
    return (unsigned int)HIDWORD(v30);
  return (unsigned int)v11;
}
