/*
 * XREFs of sub_140078CD8 @ 0x140078CD8
 * Callers:
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 *     sub_14012DC60 @ 0x14012DC60 (sub_14012DC60.c)
 *     sub_1401AEB68 @ 0x1401AEB68 (sub_1401AEB68.c)
 * Callees:
 *     sub_140078064 @ 0x140078064 (sub_140078064.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140078CD8(struct _DEVICE_OBJECT *a1, char a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  char v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v3 = sub_140078064(a1, &v8);
  if ( v3 >= 0 )
  {
    v4 = v8;
    if ( *(_QWORD *)(v8 + 32) && ((*(void (__fastcall **)(_QWORD, char *))(v8 + 48))(*(_QWORD *)(v8 + 8), &v7), v7) )
    {
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(v4 + 32))(*(_QWORD *)(v4 + 8), v5);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v3;
}
