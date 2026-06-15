/*
 * XREFs of sub_14003DE30 @ 0x14003DE30
 * Callers:
 *     sub_14003DCC0 @ 0x14003DCC0 (sub_14003DCC0.c)
 * Callees:
 *     sub_140005624 @ 0x140005624 (sub_140005624.c)
 *     sub_140038A48 @ 0x140038A48 (sub_140038A48.c)
 */

__int64 *sub_14003DE30()
{
  HRESULT v0; // eax
  __int64 v1; // rcx

  xmmword_1400E8628 = 0LL;
  xmmword_1400E8638 = 0LL;
  qword_1400E8648 = 0LL;
  qword_1400E8618 = 0LL;
  qword_1400E8620 = 0LL;
  qword_1400E8490 = (__int64)&qword_1400E8610;
  qword_1400E8650 = 0LL;
  if ( (int)sub_140005624((struct _RTL_CRITICAL_SECTION *)&xmmword_1400E8628) >= 0 )
    LODWORD(qword_1400E8618) = 56;
  else
    byte_1400E8928 = 1;
  xmmword_1400E8930 = xmmword_1400C73C8;
  dword_1400E8658 = GetCurrentThreadId();
  qword_1400E8660 = 0LL;
  dword_1400E8668 = 5000;
  dword_1400E866C = 1000;
  byte_1400E8670 = 1;
  byte_1400E8672 = 0;
  v0 = CoInitializeEx(0LL, 0);
  if ( v0 >= 0 )
  {
    byte_1400E8672 = 1;
LABEL_9:
    sub_140038A48(v1, 1);
    return &qword_1400E8610;
  }
  if ( v0 == -2147417850 && GetModuleHandleW(L"Mscoree.dll") )
    goto LABEL_9;
  byte_1400E8928 = 1;
  return &qword_1400E8610;
}
