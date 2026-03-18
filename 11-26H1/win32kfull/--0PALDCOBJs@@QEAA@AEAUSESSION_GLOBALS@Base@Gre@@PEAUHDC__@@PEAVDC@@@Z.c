/*
 * XREFs of ??0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z @ 0x1402562E8
 * Callers:
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x140256060 (NtGdiResizePalette.c)
 * Callees:
 *     ??0?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@QEAA@XZ @ 0x140296FA8 (--0-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@QEAA@XZ.c)
 *     ??$_PushBackOne2@AEBQEAVDC@@@?$vector@PEAVDC@@U?$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_NAEBQEAVDC@@@Z @ 0x140331298 (--$_PushBackOne2@AEBQEAVDC@@@-$vector@PEAVDC@@U-$GreAllocator@PEAVDC@@$0HAGNHEEH@@@@utl@@AEAA_NA.c)
 */

PALDCOBJs *__fastcall PALDCOBJs::PALDCOBJs(
        PALDCOBJs *this,
        struct Gre::Base::SESSION_GLOBALS *a2,
        HDC a3,
        struct DC *a4)
{
  __int64 v8; // r8
  HDC **v9; // r15
  _QWORD *v10; // r14
  _QWORD **v11; // rbx
  HDC *v12; // rax
  HDC **v13; // rcx
  HDC *v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<PALDCOBJs>::OnUnexpectedThreadTerminationStatic);
  utl::vector<DC *,GreAllocator<DC *,1886221383>>::vector<DC *,GreAllocator<DC *,1886221383>>((char *)this + 32);
  v9 = (HDC **)((char *)this + 56);
  *((_BYTE *)this + 64) = 0;
  *((_QWORD *)this + 7) = a4;
  v10 = (_QWORD *)((char *)this + 48);
  v11 = (_QWORD **)((char *)this + 40);
  while ( 1 )
  {
    v12 = *v9;
    if ( *v9 && *v12 == a3 )
    {
      v13 = (HDC **)*((_QWORD *)this + 5);
      if ( v13 == *((HDC ***)this + 6) )
      {
        if ( !(unsigned __int8)utl::vector<DC *,GreAllocator<DC *,1886221383>>::_PushBackOne2<DC * const &>(
                                 (char *)this + 32,
                                 (char *)this + 56) )
          return this;
      }
      else
      {
        *v13 = v12;
        *((_QWORD *)this + 5) += 8LL;
      }
      v14 = *v9;
      v10 = (_QWORD *)((char *)this + 48);
      v11 = (_QWORD **)((char *)this + 40);
      goto LABEL_14;
    }
    LOBYTE(v8) = 1;
    v15 = HmgLock(a2, a3, v8, 0LL);
    v17 = v15;
    if ( !v15 )
      return this;
    if ( *(_WORD *)(v15 + 12) != 1 )
      break;
    if ( *v11 == (_QWORD *)*v10 )
    {
      if ( !(unsigned __int8)utl::vector<DC *,GreAllocator<DC *,1886221383>>::_PushBackOne2<DC * const &>(
                               (char *)this + 32,
                               &v17) )
        break;
    }
    else
    {
      *(*v11)++ = v17;
    }
    v14 = (HDC *)v17;
LABEL_14:
    a3 = v14[123];
    if ( !a3 )
    {
      *((_BYTE *)this + 64) = 1;
      return this;
    }
  }
  _InterlockedDecrement16((volatile signed __int16 *)(v17 + 12));
  return this;
}
