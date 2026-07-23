/*
 * XREFs of PopDirectedDripsBuildBroadcastTreePartial @ 0x1407E7900
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopDirectedDripsDiagBroadcastTreeEnd @ 0x1407E6FD0 (PopDirectedDripsDiagBroadcastTreeEnd.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0D6D8 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140B0DD88 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreePartial(
        __int64 **a1,
        __int64 a2,
        _DWORD *a3,
        struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  unsigned int v6; // ebx
  __int64 v8; // r15
  char v9; // r13
  unsigned int v10; // ebx
  __int64 **v11; // rsi
  int v12; // r14d
  int v13; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+10h]
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a2;
  v4 = 0;
  v17 = 0LL;
  v6 = a2;
  v15 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( ((_DWORD)a1[95] & 0x30000) == 0 )
  {
    PopDirectedDripsDiagBroadcastTreeBegin(a1, a2, &v17);
    v8 = v17;
    v11 = a1;
    v12 = 0;
    while ( ((_DWORD)v11[95] & 2) != 0 )
    {
      if ( !v11[1] || ((_DWORD)v11[95] & 4) != 0 )
      {
        while ( 1 )
        {
LABEL_10:
          if ( v11 == a1 )
            goto LABEL_18;
          if ( *v11 )
            break;
          v11 = (__int64 **)v11[2];
        }
        v11 = (__int64 **)*v11;
      }
      else
      {
        v11 = (__int64 **)v11[1];
      }
      if ( v11 == a1 )
      {
LABEL_18:
        v4 = v15;
        *a3 |= v15;
        v10 = v12 == 0 ? 0xC00000BB : 0;
        goto LABEL_19;
      }
    }
    v13 = PopDirectedDripsBuildBroadcastTreeFull(v11, v8, v6, &v15);
    v10 = v13;
    if ( v13 >= 0 )
    {
      ++v12;
    }
    else
    {
      v9 = 1;
      if ( v13 != -1073741637 )
      {
        v4 = v15;
        goto LABEL_19;
      }
    }
    v6 = v16;
    goto LABEL_10;
  }
  v10 = 0;
LABEL_19:
  LOBYTE(a4) = v9;
  PopDirectedDripsDiagBroadcastTreeEnd(v8, v10, v4, a4);
  return v10;
}
