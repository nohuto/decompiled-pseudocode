/*
 * XREFs of sub_140055590 @ 0x140055590
 * Callers:
 *     sub_140055518 @ 0x140055518 (sub_140055518.c)
 * Callees:
 *     sub_14003AC78 @ 0x14003AC78 (sub_14003AC78.c)
 *     sub_14003AEC4 @ 0x14003AEC4 (sub_14003AEC4.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_14005A6A4 @ 0x14005A6A4 (sub_14005A6A4.c)
 *     sub_140133C1C @ 0x140133C1C (sub_140133C1C.c)
 */

__int64 __fastcall sub_140055590(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r14d
  unsigned __int8 v7; // al
  int v9; // [rsp+20h] [rbp-38h]
  void *v10; // [rsp+30h] [rbp-28h]
  __int64 v11[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE v13; // [rsp+70h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  v13 = (HANDLE)-1LL;
  *(_OWORD *)v11 = 0LL;
  v2 = 0;
  if ( sub_14003AEC4(&v13) >= 0 )
  {
    sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)v11);
    if ( (int)sub_14003AC78(
                (__int64)v13,
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(a1 + 856),
                v3,
                v9,
                (PWSTR *)v11,
                v10,
                &Handle) >= 0 )
    {
      v6 = *(unsigned __int8 *)(a1 + 456);
      if ( *(_BYTE *)(a1 + 456) )
      {
        do
        {
          if ( v2 >= 0xFF )
            break;
          LOBYTE(v4) = v2;
          v7 = sub_14005A6A4(a1, v4, v5, a1 + 8 * (v2 + 260LL));
          sub_140133C1C(Handle, v2++, v7);
        }
        while ( v2 < v6 );
      }
    }
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
  }
  if ( v13 != (HANDLE)-1LL )
    ZwClose(v13);
  return 0LL;
}
