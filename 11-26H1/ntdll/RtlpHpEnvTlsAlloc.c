/*
 * XREFs of RtlpHpEnvTlsAlloc @ 0x180072460
 * Callers:
 *     RtlpHpLfhContextEnable @ 0x1800EB094 (RtlpHpLfhContextEnable.c)
 * Callees:
 *     RtlpFlsAlloc @ 0x180072548 (RtlpFlsAlloc.c)
 *     RtlTlsAlloc @ 0x180072BB0 (RtlTlsAlloc.c)
 *     RtlTlsFree @ 0x1800732F0 (RtlTlsFree.c)
 *     RtlpFlsFree @ 0x180073484 (RtlpFlsFree.c)
 */

__int64 __fastcall RtlpHpEnvTlsAlloc(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  ULONG v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v2 = 0;
  v3 = -1;
  v10 = 0;
  v8 = -1;
  if ( a2 )
  {
    v4 = RtlpFlsAlloc(&RtlpHpEnvFlsContext, (__int64)&v10);
    v2 = v10;
    if ( v4 >= 0 && v10 <= 0xFFFF )
    {
      if ( (int)RtlTlsAlloc(&v8) >= 0 )
      {
        v5 = v2 << 16;
        v2 = 0;
        v6 = (unsigned __int16)v8 | v5;
        v3 = -1;
        goto LABEL_6;
      }
      v3 = v8;
    }
  }
  v6 = 0;
LABEL_6:
  if ( v2 )
    RtlpFlsFree(&RtlpHpEnvFlsContext);
  if ( v3 != -1 )
    RtlTlsFree(v3);
  return v6;
}
