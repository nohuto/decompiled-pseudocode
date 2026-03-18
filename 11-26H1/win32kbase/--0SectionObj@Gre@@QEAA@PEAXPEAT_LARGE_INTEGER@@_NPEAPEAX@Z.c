/*
 * XREFs of ??0SectionObj@Gre@@QEAA@PEAXPEAT_LARGE_INTEGER@@_NPEAPEAX@Z @ 0x14014C460
 * Callers:
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1401BEC68 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x14014C520 (ZwWin32CreateSection.c)
 */

Gre::SectionObj *__fastcall Gre::SectionObj::SectionObj(
        Gre::SectionObj *this,
        HANDLE a2,
        union _LARGE_INTEGER *a3,
        unsigned __int8 a4,
        void **a5)
{
  int v7; // [rsp+28h] [rbp-58h]
  void *v8; // [rsp+38h] [rbp-48h]
  int v9; // [rsp+40h] [rbp-40h]
  int v10[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int128 v14; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *(_QWORD *)v10 = 48LL;
  v13 = 512LL;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  if ( (int)ZwWin32CreateSection(
              (int)this,
              (int)a2,
              (int)v10,
              (int)a3,
              2 * (unsigned int)a4 + 2,
              v7,
              a2,
              v8,
              v9,
              &Handle) < 0 )
  {
    *(_QWORD *)this = 0LL;
  }
  else if ( a5 )
  {
    *a5 = Handle;
  }
  else
  {
    ZwClose(Handle);
  }
  return this;
}
