/*
 * XREFs of ExGetPoolTagInfo @ 0x140B5A170
 * Callers:
 *     EtwpPoolRunDown @ 0x140835BF8 (EtwpPoolRunDown.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExpCapturePoolTrackTables @ 0x140529B0C (ExpCapturePoolTrackTables.c)
 *     ExpCapturePoolTrackTablesPrecise @ 0x140777D38 (ExpCapturePoolTrackTablesPrecise.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall ExGetPoolTagInfo(int *a1, unsigned int a2, unsigned int *a3, char a4, int a5)
{
  int *v7; // rdi
  unsigned int v8; // r15d
  int v9; // eax
  unsigned int v10; // ebx
  char *v11; // rsi
  char *v12; // rax
  int v13; // r12d
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // eax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  int v20; // [rsp+20h] [rbp-78h]
  unsigned int v21; // [rsp+24h] [rbp-74h]
  PVOID P; // [rsp+30h] [rbp-68h] BYREF
  int v23; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+3Ch] [rbp-5Ch]
  char *v25; // [rsp+40h] [rbp-58h]
  int *v26; // [rsp+48h] [rbp-50h]
  char *v27; // [rsp+50h] [rbp-48h]
  unsigned int v28; // [rsp+A0h] [rbp+8h]

  v7 = a1 + 2;
  v8 = 8;
  P = 0LL;
  if ( a4 )
    RtlWriteULongToUser(a1, 0);
  else
    *a1 = 0;
  if ( a5 )
    v9 = ExpCapturePoolTrackTablesPrecise(&P);
  else
    v9 = ExpCapturePoolTrackTables(&P);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (char *)P + 8;
    v12 = (char *)P + 80 * *(_QWORD *)P + 8;
    v25 = v12;
    v13 = 0;
    while ( v11 < v12 )
    {
      if ( *(_DWORD *)v11 )
      {
        v24 = ++v13;
        v8 += 40;
        if ( v8 < 0x28 )
        {
          v10 = -1073741675;
          break;
        }
        if ( a2 >= v8 )
        {
          v28 = *((_DWORD *)v11 + 12);
          v14 = v28;
          if ( *((_DWORD *)v11 + 10) >= v28 )
            v14 = *((_DWORD *)v11 + 10);
          v23 = v14;
          v21 = *((_DWORD *)v11 + 6);
          v15 = v21;
          if ( *((_DWORD *)v11 + 4) >= v21 )
            v15 = *((_DWORD *)v11 + 4);
          v20 = v15;
          v16 = *(_DWORD *)v11;
          if ( a4 )
          {
            RtlWriteULongToUser(v7, v16);
            v14 = v23;
          }
          else
          {
            *v7 = v16;
          }
          if ( a4 )
            RtlWriteULongToUser(v7 + 1, v14);
          else
            v7[1] = v14;
          if ( a4 )
            RtlWriteULongToUser(v7 + 2, v28);
          else
            v7[2] = v28;
          v17 = v7 + 4;
          if ( a4 )
            RtlWriteULong64ToUser(v17, *((_QWORD *)v11 + 4));
          else
            *v17 = *((_QWORD *)v11 + 4);
          if ( a4 )
            RtlWriteULongToUser(v7 + 6, v20);
          else
            v7[6] = v20;
          if ( a4 )
            RtlWriteULongToUser(v7 + 7, v21);
          else
            v7[7] = v21;
          v18 = v7 + 8;
          if ( a4 )
            RtlWriteULong64ToUser(v18, *((_QWORD *)v11 + 1));
          else
            *v18 = *((_QWORD *)v11 + 1);
          v7 += 10;
          v26 = v7;
        }
        else
        {
          v10 = -1073741820;
        }
      }
      v11 += 80;
      v27 = v11;
      v12 = v25;
    }
    if ( a4 )
      RtlWriteULongToUser(a1, v13);
    else
      *a1 = v13;
    if ( a3 )
      *a3 = v8;
  }
  if ( P )
    ExFreePool(P);
  return v10;
}
