/*
 * XREFs of sub_140036A70 @ 0x140036A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140036A70(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  __int64 v5; // rsi
  __int64 v6; // rax
  _DWORD *v8; // rax

  v2 = *(unsigned __int8 **)(a2 + 184);
  v5 = *v2;
  if ( *((_DWORD *)v2 + 6) == 2954240 )
  {
    v8 = *(_DWORD **)(a2 + 24);
    if ( v8 )
    {
      if ( !v8[1] && *v8 == 1 && *((_DWORD *)v2 + 2) >= 0x20u )
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x10) != 0
          && BYTE1(off_140168120->Timer) >= 4u )
        {
          sub_140055930(off_140168120->AttachedDevice, 16LL, &unk_14014EF40);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_140168300 + 8))(
          a1,
          a2,
          sub_14003A9B0,
          0LL);
      }
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))qword_140168300)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v6 + 8 * v5 + 32))(a1, a2);
}
