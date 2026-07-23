/*
 * XREFs of ExGetPoolTagInfo2 @ 0x14083DAC8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExpCapturePoolTrackTables @ 0x140529B0C (ExpCapturePoolTrackTables.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall ExGetPoolTagInfo2(int *a1, unsigned int a2, unsigned int *a3, char a4)
{
  unsigned int v5; // r13d
  int v6; // r14d
  signed int v7; // ebx
  int *v8; // rsi
  unsigned __int64 i; // r12
  unsigned int v10; // edx
  _QWORD *v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  PVOID P[8]; // [rsp+28h] [rbp-40h] BYREF
  int v28; // [rsp+90h] [rbp+28h]

  P[0] = 0LL;
  v5 = 8;
  v6 = 0;
  v28 = 0;
  v7 = ExpCapturePoolTrackTables(P);
  if ( v7 >= 0 )
  {
    v8 = a1 + 2;
    for ( i = 0LL; ; ++i )
    {
      v10 = v5;
      v11 = P[0];
      if ( i >= *(_QWORD *)P[0] )
        break;
      if ( !*((_DWORD *)P[0] + 20 * i + 2) )
        goto LABEL_31;
      v12 = v5 + 56;
      v13 = -1;
      if ( v5 + 56 >= v5 )
        v13 = v5 + 56;
      v5 = v13;
      v7 = v12 < v10 ? 0xC0000095 : 0;
      if ( v12 < v10 )
        goto LABEL_40;
      if ( v13 <= a2 )
      {
        v14 = *((_DWORD *)P[0] + 20 * i + 2);
        if ( a4 )
          RtlWriteULongToUser(v8, v14);
        else
          *v8 = v14;
        v15 = v8 + 2;
        if ( a4 )
          RtlWriteULong64ToUser(v15, v11[10 * i + 6]);
        else
          *v15 = v11[10 * i + 6];
        v16 = v8 + 4;
        if ( a4 )
          RtlWriteULong64ToUser(v16, v11[10 * i + 7]);
        else
          *v16 = v11[10 * i + 7];
        v17 = v8 + 6;
        if ( a4 )
          RtlWriteULong64ToUser(v17, v11[10 * i + 5]);
        else
          *v17 = v11[10 * i + 5];
        v18 = v8 + 8;
        if ( a4 )
          RtlWriteULong64ToUser(v18, v11[10 * i + 3]);
        else
          *v18 = v11[10 * i + 3];
        v19 = v8 + 10;
        if ( a4 )
          RtlWriteULong64ToUser(v19, v11[10 * i + 4]);
        else
          *v19 = v11[10 * i + 4];
        v20 = v8 + 12;
        if ( a4 )
          RtlWriteULong64ToUser(v20, v11[10 * i + 2]);
        else
          *v20 = v11[10 * i + 2];
        v8 += 14;
        v6 = ++v28;
      }
      else
      {
LABEL_31:
        v6 = v28;
      }
    }
    v21 = a2;
    if ( a2 >= 4 )
    {
      if ( a4 )
      {
        RtlWriteULongToUser(a1, v6);
        v21 = a2;
      }
      else
      {
        *a1 = v6;
      }
    }
    if ( a3 )
      *a3 = v5;
    v7 = v21 < v5 ? 0xC0000004 : 0;
  }
LABEL_40:
  if ( P[0] )
    ExFreePool(P[0]);
  return (unsigned int)v7;
}
