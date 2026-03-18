/*
 * XREFs of ?LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z @ 0x14000248C
 * Callers:
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002398 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x14000D3AC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall LpcVerifyOutgoingPayloadSize(const struct _PORT_MESSAGE *a1)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1->u1.s1.TotalLength > 512 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\lpcshared.h",
      (const char *)0x8007029CLL,
      v1);
}
