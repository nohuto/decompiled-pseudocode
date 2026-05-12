/*
 * XREFs of sub_140133C1C @ 0x140133C1C
 * Callers:
 *     sub_140055590 @ 0x140055590 (sub_140055590.c)
 * Callees:
 *     sub_14003AD8C @ 0x14003AD8C (sub_14003AD8C.c)
 */

__int64 __fastcall sub_140133C1C(void *a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  HANDLE v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-28h]
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  result = sub_14003AD8C(a1, 1u, &Handle, L"Scsi Bus %d", a2);
  if ( (int)result >= 0 )
  {
    LODWORD(v8) = a3;
    v7 = Handle;
    sub_14003AD8C(Handle, 1u, 0LL, L"Initiator Id %d", v8);
    if ( a4 )
      *a4 = v7;
    else
      ZwClose(v7);
    return 0LL;
  }
  return result;
}
