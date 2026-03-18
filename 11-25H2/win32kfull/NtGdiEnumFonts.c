/*
 * XREFs of NtGdiEnumFonts @ 0x1401A28B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400B9260 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiEnumFonts(
        HDC a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        char *Src,
        unsigned int a6,
        ULONG64 a7,
        _DWORD *Address)
{
  void *v10; // rdi
  unsigned int v11; // esi
  size_t v12; // r8
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v19; // [rsp+40h] [rbp-A8h] BYREF
  void *v20; // [rsp+48h] [rbp-A0h]
  _QWORD v21[19]; // [rsp+50h] [rbp-98h] BYREF

  v10 = 0LL;
  v20 = 0LL;
  v11 = 1;
  v19 = 0;
  if ( Src )
  {
    if ( a4 - 1 > 0x1F )
      return 0LL;
    v10 = (void *)AllocFreeTmpBuffer(2 * a4);
    v20 = v10;
    if ( v10 )
    {
      v12 = 2LL * a4;
      if ( &Src[v12] < Src || (unsigned __int64)&Src[v12] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, Src, v12);
      *((_WORD *)v10 + a4 - 1) = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    v14 = (unsigned int *)a7;
    if ( a7 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v15 = *v14;
    v19 = *v14;
    if ( Address )
      ProbeForWrite(Address, v15, 4u);
    if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() == 1 && a1 == (HDC)-589410304LL )
      a1 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 56968) + 64LL);
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
    if ( v21[0] )
    {
      v11 = GrepEnumFonts((struct XDCOBJ *)v21, a2, a3, (const unsigned __int16 *)v10, a6, &v19, Address);
    }
    else
    {
      EngSetLastError(6u);
      v11 = 0;
    }
    v18 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = v19;
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
  }
  if ( v10 )
    FreeTmpBuffer(v10);
  return v11;
}
