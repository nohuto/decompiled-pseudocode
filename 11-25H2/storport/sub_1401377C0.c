/*
 * XREFs of sub_1401377C0 @ 0x1401377C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_14013BDC4 @ 0x14013BDC4 (sub_14013BDC4.c)
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 *     sub_14013C148 @ 0x14013C148 (sub_14013C148.c)
 *     sub_14013C188 @ 0x14013C188 (sub_14013C188.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1401377C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  unsigned int i; // ebp
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // eax
  const void *v15; // rdx
  int v16; // eax
  int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-38h]
  _QWORD v23[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = sub_14013C148(a3, 1LL);
  if ( v6 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(a4 + 16) )
        return (unsigned int)sub_14013C188(a3);
      v8 = *(unsigned int *)(a3 + 12);
      v9 = *(_QWORD *)(a4 + 8) + 32LL * i;
      if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a3 + 8) )
        return (unsigned int)-1073741789;
      *(_BYTE *)(v8 + *(_QWORD *)a3) = -14;
      ++*(_DWORD *)(a3 + 12);
      if ( (unsigned int)(*(_DWORD *)(v9 + 12) - 7) > 7 || *(_DWORD *)(v9 + 8) > 8u )
      {
        v11 = *(unsigned int *)(v9 + 8);
        v12 = v9;
        if ( (unsigned int)v11 > 8 )
          v12 = *(_QWORD *)v9;
        v10 = sub_14013BDC4(a3, v12, v11);
      }
      else
      {
        v10 = sub_14013BE4C(a3, *(_QWORD *)v9);
      }
      v6 = v10;
      if ( v10 < 0 )
        return (unsigned int)v6;
      v13 = *(_DWORD *)(v9 + 28);
      if ( (unsigned int)(v13 - 7) <= 7 )
      {
        v14 = *(_DWORD *)(v9 + 24);
        if ( v14 <= 8 )
          break;
      }
      if ( (unsigned int)(v13 - 15) <= 2 )
      {
        v16 = sub_14013BDC4(a3, *(_QWORD *)(v9 + 16), *(unsigned int *)(v9 + 24));
        goto LABEL_17;
      }
      if ( v13 != 1 )
        goto LABEL_26;
      v17 = *(_DWORD *)(v9 + 24);
      v6 = 0;
      v18 = *(unsigned int *)(a3 + 12);
      v19 = *(_DWORD *)(a3 + 8);
      if ( (int)v18 + v17 <= v19 )
      {
        memmove((void *)(*(_QWORD *)a3 + v18), *(const void **)(v9 + 16), *(unsigned int *)(v9 + 24));
        *(_DWORD *)(a3 + 12) += v17;
      }
      else
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        {
          LODWORD(v22) = v18 + v17;
          sub_140067F28((__int64)off_140168120->AttachedDevice, 0xFu, (__int64)&unk_1401552D8, v19, v22);
        }
        v6 = -1073741789;
      }
LABEL_25:
      if ( v6 < 0 )
        return (unsigned int)v6;
LABEL_26:
      v20 = *(unsigned int *)(a3 + 12);
      if ( (unsigned int)(v20 + 1) > *(_DWORD *)(a3 + 8) )
        return (unsigned int)-1073741789;
      *(_BYTE *)(v20 + *(_QWORD *)a3) = -13;
      ++*(_DWORD *)(a3 + 12);
    }
    v15 = *(const void **)(v9 + 16);
    v23[0] = 0LL;
    memmove(v23, v15, v14);
    v16 = sub_14013BE4C(a3, v23[0]);
LABEL_17:
    v6 = v16;
    goto LABEL_25;
  }
  return (unsigned int)v6;
}
