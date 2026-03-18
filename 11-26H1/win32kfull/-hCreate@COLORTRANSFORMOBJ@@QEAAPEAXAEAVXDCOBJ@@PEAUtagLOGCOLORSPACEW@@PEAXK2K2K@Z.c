/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x140320D20
 * Callers:
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14032FFF0 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z @ 0x1401E6998 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EK@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x140320B68 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct Gre::Base::SESSION_GLOBALS **a2,
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
  __int64 v13; // rbx
  struct Gre::Base::SESSION_GLOBALS *v14; // r13
  struct OBJECT *Object; // r12
  __int64 (__fastcall *v16)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD); // r10
  __int64 v17; // rbx
  struct HOBJ__ **v18; // rax
  _BYTE v20[40]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h]
  char v22; // [rsp+80h] [rbp-88h]
  _BYTE v23[208]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+170h] [rbp+68h] BYREF
  struct tagLOGCOLORSPACEW *v25; // [rsp+178h] [rbp+70h]
  void *v26; // [rsp+180h] [rbp+78h]

  v26 = a4;
  v25 = a3;
  v9 = 0LL;
  v10 = 0LL;
  v13 = *((_QWORD *)*a2 + 6);
  v24 = v13;
  if ( v13 )
  {
    v14 = Gre::Base::Globals(this);
    Object = (struct OBJECT *)AllocateObject(v14, 0x20u, 0xEu);
    if ( Object )
    {
      memset(&v20[8], 0, 32);
      PushThreadGuardedObject(
        &v20[8],
        &v20[8],
        UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
      v21 = 0LL;
      v22 = 0;
      v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v20[8], v14, Object, 0xEu, 2u);
      if ( v9 )
      {
        *((_QWORD *)this + 4) = Object;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&v24);
        v16 = *(__int64 (__fastcall **)(_QWORD, struct tagLOGCOLORSPACEW *, void *, _QWORD, void *, unsigned int, void *, unsigned int, _DWORD))(v13 + 3192);
        if ( v16 )
        {
          v17 = v16(*(_QWORD *)(v13 + 1784), v25, v26, a5, a6, a7, a8, a9, 0);
          v10 = v17;
          if ( v17 )
          {
            *(_QWORD *)(*((_QWORD *)this + 4) + 24LL) = v17;
            v18 = (struct HOBJ__ **)Win32AllocPoolZInit(16LL, 1650745671LL);
            if ( v18 )
            {
              *v18 = v9;
              v18[1] = (struct HOBJ__ *)*((_QWORD *)*a2 + 260);
              *((_QWORD *)*a2 + 260) = v18;
            }
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v20[8]);
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
        FreeObject(v14, Object, 0xEu);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
