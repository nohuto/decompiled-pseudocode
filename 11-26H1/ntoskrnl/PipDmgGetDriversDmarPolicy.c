/*
 * XREFs of PipDmgGetDriversDmarPolicy @ 0x140B266DC
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x1409700B4 (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140B267A0 (PipDmgGetDriverDmarCompatLevel.c)
 */

__int64 __fastcall PipDmgGetDriversDmarPolicy(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rsi
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  int DriverDmarCompatLevel; // eax
  __int128 v8; // [rsp+20h] [rbp-38h]

  v1 = 6LL;
  v2 = a1 + 2;
  v8 = 0LL;
  v4 = 1;
  do
  {
    v5 = (_QWORD *)*v2;
    while ( v5 )
    {
      DriverDmarCompatLevel = PipDmgGetDriverDmarCompatLevel(*v5);
      v5 = (_QWORD *)v5[1];
      ++*((_DWORD *)&v8 + DriverDmarCompatLevel);
    }
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( !DWORD1(v8) )
  {
    if ( HIDWORD(v8) )
      return (*(_BYTE *)(*(_QWORD *)(*a1 + 720LL) + 16LL) & 0x24) != 0 ? 2 : 0;
    else
      return DWORD2(v8) != 0 ? 2 : 0;
  }
  return v4;
}
