/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1401EF568
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x14007F970 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x14007F948 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1401ECA08 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ??1DDAMetaData@@QEAA@XZ @ 0x1401EF534 (--1DDAMetaData@@QEAA@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x14042401C (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this)
{
  __int64 i; // rdi
  void *v3; // rsi
  __int64 v4; // rsi
  DDAMetaData **v5; // rdi
  __int64 v6; // r14
  DDAMetaData *v7; // rbp
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  AUTOEXPANDALLOCATION **v10; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v3 = (void *)*((_QWORD *)this + i + 6);
    if ( v3 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v4 = 2LL;
  v5 = (DDAMetaData **)((char *)this + 80);
  v6 = 2LL;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      DDAMetaData::~DDAMetaData(*v5);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    }
    *v5 = 0LL;
    v5 += 12;
    --v6;
  }
  while ( v6 );
  if ( *((_DWORD *)this + 76) )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionData);
    *((_DWORD *)this + 76) = 0;
  }
  v10 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    if ( *v10 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(*v10);
      *v10 = 0LL;
    }
    v10 += 12;
    --v4;
  }
  while ( v4 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventOutputDuplicationDestroy);
  _InterlockedDecrement(&g_DbgGlobalContextCount);
}
