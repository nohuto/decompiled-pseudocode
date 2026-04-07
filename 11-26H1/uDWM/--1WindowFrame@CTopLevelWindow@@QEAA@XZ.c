/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180007F38
 * Callers:
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180007E44 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BBE0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008E660 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::~WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  CBaseObject **v4; // rsi
  __int64 v5; // r14
  CBaseObject **v6; // rdi
  __int64 v7; // rbp
  CBaseObject *v8; // rcx

  CBitmapSourceArray::ReleaseContents(this, 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 32), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 64), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 96), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 128), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 160), 1);
  v2 = (char *)this + 224;
  v3 = 4LL;
  do
  {
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 - 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)v2, 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 64), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 96), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 128), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 160), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 192), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 224), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 256), 1);
    v2 += 320;
    --v3;
  }
  while ( v3 );
  v4 = (CBaseObject **)((char *)this + 1472);
  v5 = 2LL;
  do
  {
    v6 = v4;
    v7 = 22LL;
    do
    {
      if ( *v6 )
      {
        CBaseObject::Release(*v6);
        *v6 = 0LL;
      }
      v6 += 2;
      --v7;
    }
    while ( v7 );
    ++v4;
    --v5;
  }
  while ( v5 );
  v8 = (CBaseObject *)*((_QWORD *)this + 229);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 229) = 0LL;
  }
  `eh vector destructor iterator'(
    (char *)this + 192,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  CBitmapSourceArray::~CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 160));
  CBitmapSourceArray::~CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 128));
  CBitmapSourceArray::~CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 96));
  CBitmapSourceArray::~CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 64));
  CBitmapSourceArray::~CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 32));
  CBitmapSourceArray::~CBitmapSourceArray(this);
}
