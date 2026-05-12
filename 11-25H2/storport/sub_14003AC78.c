/*
 * XREFs of sub_14003AC78 @ 0x14003AC78
 * Callers:
 *     sub_140055590 @ 0x140055590 (sub_140055590.c)
 * Callees:
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 *     sub_14003AD8C @ 0x14003AD8C (sub_14003AD8C.c)
 */

__int64 __fastcall sub_14003AC78(__int64 a1, int a2, int a3, int a4, int a5, PWSTR *a6, HANDLE Handle, _QWORD *a8)
{
  __int64 result; // rax
  HANDLE v9; // rbx
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = 0;
  Handle = 0LL;
  result = sub_14003AD8C(a1, 1LL, &Handle, L"Scsi Port %d", a2);
  if ( (int)result >= 0 )
  {
    v9 = Handle;
    if ( v11 )
      sub_14003A5EC(Handle, L"Interrupt", 4u, (PWSTR)&v11, 4u);
    v12 = 1;
    sub_14003A5EC(v9, L"Dma64BitAddresses", 4u, (PWSTR)&v12, 4u);
    if ( a6 )
      sub_14003A5EC(v9, L"Driver", 1u, a6[1], *(unsigned __int16 *)a6 + 2);
    if ( a8 )
      *a8 = v9;
    else
      ZwClose(v9);
    return 0LL;
  }
  return result;
}
