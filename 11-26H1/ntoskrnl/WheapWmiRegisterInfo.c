/*
 * XREFs of WheapWmiRegisterInfo @ 0x1406DCCEC
 * Callers:
 *     WheaWmiDispatch @ 0x1406DC190 (WheaWmiDispatch.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall WheapWmiRegisterInfo(__int64 a1, unsigned int a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v8; // r8
  int *v9; // rdx
  int *v10; // rcx
  int v11; // eax

  v4 = 222;
  if ( a2 >= 0xDE )
  {
    memset_0(a3, 0, 0xDEuLL);
    v8 = 5LL;
    v9 = &dword_14000DF9C;
    a3[4] = 5;
    v10 = a3 + 10;
    do
    {
      *((_OWORD *)v10 - 1) = *(_OWORD *)*(_QWORD *)(v9 - 3);
      v11 = *v9;
      v9 += 4;
      *v10 = v11;
      v10 += 8;
      *(v10 - 7) = *(v9 - 5);
      *(v10 - 6) = 184;
      --v8;
    }
    while ( v8 );
    *((_WORD *)a3 + 92) = 36;
    *(_OWORD *)((char *)a3 + 186) = *(_OWORD *)L"WHEA_WMI_PROVIDER";
    *(_OWORD *)((char *)a3 + 202) = *(_OWORD *)L"_PROVIDER";
    *(_DWORD *)((char *)a3 + 218) = *(_DWORD *)L"R";
    result = 0LL;
    *a3 = 222;
  }
  else
  {
    if ( a2 >= 4 )
    {
      *a3 = 222;
      v4 = 4;
    }
    result = 3221225507LL;
  }
  *a4 = v4;
  return result;
}
