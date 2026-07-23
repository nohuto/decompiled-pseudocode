/*
 * XREFs of HalpChannelPowerRequest @ 0x140789D80
 * Callers:
 *     HaliSetSystemInformation @ 0x14077965C (HaliSetSystemInformation.c)
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpStartPccCommand @ 0x14078A034 (HalpStartPccCommand.c)
 */

__int64 __fastcall HalpChannelPowerRequest(__int16 *a1, int a2, _DWORD *a3)
{
  int started; // ecx
  int v6; // r8d
  __int16 v7; // r11
  __int16 v8; // r10
  unsigned int v9; // edx
  __int64 i; // rcx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax

  if ( a2 != 24 )
    return (unsigned int)-1073741820;
  v6 = *((_DWORD *)a1 + 1);
  v7 = *a1;
  v8 = a1[1];
  v9 = *((_DWORD *)a1 + 4);
  if ( v6 == 2 )
  {
    if ( v9 >= 2 )
      return (unsigned int)-1073741808;
  }
  else if ( ((v6 - 1) & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741808;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= dword_140F87A80 )
      return (unsigned int)-1073741275;
    if ( *((_WORD *)qword_140F87A78 + 8 * (unsigned int)i + 5) == v7
      && *((_WORD *)qword_140F87A78 + 8 * (unsigned int)i + 6) == v8 )
    {
      break;
    }
  }
  if ( v6 == 2 )
  {
    if ( v9 == 1 )
      v9 = *((unsigned __int8 *)qword_140F87A78 + 16 * (unsigned int)i + 15);
    *((_QWORD *)a1 + 2) = v9;
  }
  v12 = *((unsigned __int16 *)qword_140F87A78 + 8 * i + 4);
  started = HalpStartPccCommand();
  if ( started >= 0 )
  {
    *(_DWORD *)(qword_140F87B20 + 12) = v12;
    *(_DWORD *)qword_140F87B20 = *((_DWORD *)a1 + 1);
    if ( *((_DWORD *)a1 + 1) == 2 )
      *(_DWORD *)(qword_140F87B20 + 8) = *((_DWORD *)a1 + 4);
    LOBYTE(v13) = 3;
    started = guard_dispatch_icall_no_overrides(*((__int64 *)&xmmword_140F87AD0 + 1), v13);
  }
  if ( started >= 0 )
  {
    v14 = qword_140F87B20;
    *((_DWORD *)a1 + 2) = *(_DWORD *)(qword_140F87B20 + 4);
    v15 = *((_DWORD *)a1 + 1);
    switch ( v15 )
    {
      case 2:
        goto LABEL_30;
      case 1:
        v16 = *(_DWORD *)(v14 + 8) != 0;
        break;
      case 3:
        v16 = *(_QWORD *)(v14 + 24);
        break;
      case 4:
        v16 = *(_QWORD *)(v14 + 16);
        break;
      default:
        goto LABEL_30;
    }
    *((_QWORD *)a1 + 2) = v16;
LABEL_30:
    if ( a3 )
      *a3 = 24;
  }
  return (unsigned int)started;
}
