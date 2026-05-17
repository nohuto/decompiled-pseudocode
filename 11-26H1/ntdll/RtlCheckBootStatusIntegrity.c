/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x180141A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlBootStatusItemInfo @ 0x180141A08 (RtlBootStatusItemInfo.c)
 *     NtReadFile @ 0x18015F000 (NtReadFile.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, bool *a2)
{
  char v4; // r14
  int v5; // ebx
  __int64 Heap_0; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  v14 = 0;
  v10 = 0;
  v13 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v4 = 0;
  v5 = NtReadFile(a1, 0LL, 0LL, 0LL, &v12, &v13, 4, &v11, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(0xFu, &v14, &v10);
    if ( v5 >= 0 )
    {
      if ( v13 < v14 + v10 || v13 > 0x800 )
      {
        *a2 = 0;
      }
      else
      {
        Heap_0 = RtlAllocateHeap_0();
        if ( Heap_0 )
        {
          v5 = NtReadFile(a1, 0LL, 0LL, 0LL, &v12, Heap_0, v13, &v11, 0LL);
          if ( v5 >= 0 )
          {
            v7 = v13;
            if ( *((_QWORD *)&v12 + 1) == v13 )
            {
              if ( v13 )
              {
                v8 = (_BYTE *)Heap_0;
                do
                {
                  v4 += *v8++;
                  --v7;
                }
                while ( v7 );
              }
              *a2 = v4 == 0;
            }
            else
            {
              *a2 = 0;
            }
          }
          RtlFreeHeap_0();
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v5;
}
