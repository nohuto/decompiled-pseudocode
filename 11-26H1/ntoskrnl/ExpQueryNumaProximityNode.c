/*
 * XREFs of ExpQueryNumaProximityNode @ 0x14077A4EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall ExpQueryNumaProximityNode(_DWORD *a1, unsigned int a2, _DWORD *a3, char a4)
{
  int v7; // edi
  unsigned int ULongFromUser; // eax
  unsigned __int16 i; // r8
  unsigned __int16 *v10; // rcx
  unsigned __int16 v12; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+70h] [rbp+18h]
  char v14; // [rsp+78h] [rbp+20h]

  v14 = a4;
  v13 = a3;
  if ( a2 >= 8 )
  {
    if ( a4 )
      ULongFromUser = RtlReadULongFromUser(a1);
    else
      ULongFromUser = *a1;
    v7 = 0;
    v12 = 0;
    if ( PnpQueryProximityNode )
    {
      v7 = guard_dispatch_icall_no_overrides(ULongFromUser, (__int64)&v12);
      if ( v7 >= 0 )
      {
        for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
        {
          if ( *(_WORD *)KeNodeBlock[i] == v12 )
          {
            v12 = i;
            break;
          }
        }
        if ( i >= (unsigned __int16)KeNumberNodes )
          v7 = -1073741595;
      }
    }
    if ( v7 >= 0 )
    {
      v10 = (unsigned __int16 *)(a1 + 1);
      if ( a4 )
        RtlWriteUShortToUser(v10, v12);
      else
        *v10 = v12;
    }
  }
  else
  {
    v7 = -1073741820;
  }
  if ( a3 )
    *a3 = 8;
  return (unsigned int)v7;
}
