/*
 * XREFs of PpmWmiRegisterInfo @ 0x1407D9FC4
 * Callers:
 *     PpmWmiDispatch @ 0x140A8C7C0 (PpmWmiDispatch.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __fastcall PpmWmiRegisterInfo(int a1, __int64 a2, unsigned int a3, _DWORD *a4, int *a5)
{
  int v5; // ebx
  NTSTATUS result; // eax
  __int64 v10; // r8
  int *v11; // rdx
  int *v12; // rcx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-18h]

  v5 = 332;
  if ( a3 >= 0x14C )
  {
    memset_0(a4, 0, 0x14CuLL);
    v10 = 8LL;
    v11 = &dword_14000D2EC;
    a4[4] = 8;
    v12 = a4 + 10;
    do
    {
      *((_OWORD *)v12 - 1) = *(_OWORD *)*(_QWORD *)(v11 - 3);
      v13 = *v11;
      v11 += 4;
      *v12 = v13;
      v12 += 8;
      *(v12 - 7) = *(v11 - 5);
      *(v12 - 6) = 280;
      --v10;
    }
    while ( v10 );
    *a4 = 332;
    *((_WORD *)a4 + 140) = 50;
    v14 = a1;
    result = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)a4 + 141, a3 - 282, L"%s%d", L"PPM_Processor_", v14);
    if ( result >= 0 )
      result = 0;
  }
  else
  {
    if ( a3 >= 4 )
    {
      *a4 = 332;
      v5 = 4;
    }
    result = -1073741789;
  }
  *a5 = v5;
  return result;
}
