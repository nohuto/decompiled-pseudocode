/*
 * XREFs of McGenControlCallbackV2 @ 0x18007C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18008DB28 (-EtwEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

void __fastcall McGenControlCallbackV2(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int *a4,
        __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        unsigned __int16 *a7)
{
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  bool v10; // r10
  int v11; // edx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // [rsp+20h] [rbp-28h]

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *((_BYTE *)a7 + 40) = a3;
        a3 = 0;
        *((_QWORD *)a7 + 3) = a5;
        *((_QWORD *)a7 + 2) = a4;
        for ( *((_DWORD *)a7 + 9) = 1; a3 < a7[21]; ++a3 )
        {
          v8 = *((_BYTE *)a7 + 40);
          v9 = *(_QWORD *)(*((_QWORD *)a7 + 7) + 8LL * a3);
          v10 = (*(_BYTE *)(a3 + *((_QWORD *)a7 + 8)) <= v8 || !v8)
             && (!v9 || (v9 & *((_QWORD *)a7 + 2)) != 0 && (v9 & *((_QWORD *)a7 + 3)) == *((_QWORD *)a7 + 3));
          v11 = 1 << a3;
          a1 = (unsigned __int64)a3 >> 5;
          a4 = (int *)(*((_QWORD *)a7 + 6) + 4 * a1);
          v12 = *a4;
          if ( v10 )
            v13 = v11 | v12;
          else
            v13 = ~v11 & v12;
          *a4 = v13;
        }
      }
    }
    else
    {
      *((_DWORD *)a7 + 9) = 0;
      *((_BYTE *)a7 + 40) = 0;
      *((_QWORD *)a7 + 2) = 0LL;
      *((_QWORD *)a7 + 3) = 0LL;
      if ( a7[21] )
        memset_0(*((void **)a7 + 6), 0, 4LL * ((a7[21] - 1) / 32 + 1));
    }
    EtwEnableCallback((const struct _GUID *)a1, a2, a3, (unsigned __int64)a4, v14, a6, a7);
  }
}
