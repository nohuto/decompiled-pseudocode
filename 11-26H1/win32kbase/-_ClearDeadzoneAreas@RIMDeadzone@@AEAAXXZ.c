/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x14017F788
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14017F58C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 i; // rdi
  char *v7; // rcx

  v4 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  if ( v4 && *((_QWORD *)this + 3) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v7 = *(char **)(*((_QWORD *)this + 3) + 24 * i + 8);
      if ( v7 )
        GreDeleteFastMutex(v7, a2, a3, a4);
    }
    GreDeleteFastMutex(*((char **)this + 3), a2, a3, a4);
  }
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
