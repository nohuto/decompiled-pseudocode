/*
 * XREFs of ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x14020C910
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x14020C184 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMDeadzone::SetDeadzonePalmTelemetry(RIMDeadzone *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = Win32AllocPoolZInitImpl(256LL, 0x300CuLL, 0x7A645052u);
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 4) = 0LL;
      *(_DWORD *)v3 = 0;
      memset((void *)(v3 + 2060), 0, 0x2800uLL);
      memset((void *)(v4 + 13), 0, 0x7FFuLL);
      *(_BYTE *)(v4 + 12) = 0;
      *((_QWORD *)this + 7) = v4;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
