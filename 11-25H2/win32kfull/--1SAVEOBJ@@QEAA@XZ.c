/*
 * XREFs of ??1SAVEOBJ@@QEAA@XZ @ 0x14021B8D0
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140055CAC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall SAVEOBJ::~SAVEOBJ(SAVEOBJ *this)
{
  if ( *((_DWORD *)this + 1) )
    (*((void (__fastcall **)(_QWORD, _QWORD))this + 2))(*((_QWORD *)this + 1), *(unsigned int *)this);
}
