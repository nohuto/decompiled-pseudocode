/*
 * XREFs of EngCreateDriverObj @ 0x1403306C0
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1403321A0 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14008FAA0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14019FA28 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rcx
  struct OBJECT *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[48]; // [rsp+30h] [rbp-48h] BYREF
  HDEV v15; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL);
  v9 = Object;
  if ( Object )
  {
    v15 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 223);
    *((_QWORD *)Object + 7) = PsGetCurrentProcess(v8);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v14, v10, v11, v12);
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v14, v9, 0LL, 0, 28);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
    else
      FreeObject(v9, 28LL);
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v14);
  }
  return (HDRVOBJ)v3;
}
