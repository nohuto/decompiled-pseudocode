/*
 * XREFs of RtlIsRangeAvailable @ 0x140AAF000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsRangeAvailable @ 0x140AAF0B8 (RtlpIsRangeAvailable.c)
 */

__int64 __fastcall RtlIsRangeAvailable(__int64 *a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, _BYTE *a8)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  char v10; // cl
  __int64 v12; // rax
  char v13; // [rsp+20h] [rbp-58h]
  __int64 *v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+68h] [rbp-10h]
  int v18; // [rsp+6Ch] [rbp-Ch]

  v17 = *((_DWORD *)a1 + 6);
  v8 = (__int64 *)*a1;
  v18 = 0;
  v14 = a1;
  if ( v8 == a1 )
  {
    *a8 = 1;
  }
  else
  {
    v9 = (__int64)(v8 - 5);
    if ( (*((_BYTE *)v8 - 6) & 1) != 0 )
    {
      v12 = v9 + 16;
      v9 = *(_QWORD *)(v9 + 16) - 40LL;
      v15 = v12;
    }
    else
    {
      v15 = 0LL;
    }
    v16 = v9;
    v10 = a4 & 2;
    v13 = a4 & 1;
    LOBYTE(a4) = a5;
    *a8 = RtlpIsRangeAvailable((unsigned int)&v14, a2, a3, a4, v13, v10, 1, a6, a7);
  }
  return 0LL;
}
