/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x140331AC4
 * Callers:
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14033D594 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14008F82C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14008FAA0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14019FA28 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14033191C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // rdi
  __int64 v10; // r15
  __int64 v15; // rbx
  __int64 v16; // rdx
  struct OBJECT *Object; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 (__fastcall *v21)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // r10
  __int64 v22; // rbx
  struct HOBJ__ **v23; // rax
  _BYTE v25[48]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v26[144]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+148h] [rbp+10h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v27 = v15;
  if ( v15 )
  {
    Object = (struct OBJECT *)AllocateObject(32LL, 14LL);
    if ( Object )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v25, v16, v18, v19);
      LOBYTE(v20) = 1;
      v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v25, Object, v20, 0, 14);
      if ( v9 )
      {
        *((_QWORD *)this + 4) = Object;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&v27);
        v21 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v15 + 3192);
        if ( v21 )
        {
          v22 = v21(*(_QWORD *)(v15 + 1784), a3, a4, a5, a6, a7, a8, a9, 0);
          v10 = v22;
          if ( v22 )
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v22;
            v23 = (struct HOBJ__ **)Win32AllocPoolZInit(16LL, 1650745671LL);
            if ( v23 )
            {
              *v23 = v9;
              v23[1] = *(struct HOBJ__ **)(*(_QWORD *)a2 + 2080LL);
              *(_QWORD *)(*(_QWORD *)a2 + 2080LL) = v23;
            }
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v26);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v25);
      if ( v9 )
      {
        if ( !v10 )
        {
          *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = 0LL;
          COLORTRANSFORMOBJ::bDelete(this, a2);
          return 0LL;
        }
      }
      else
      {
        FreeObject(Object, 14LL);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
