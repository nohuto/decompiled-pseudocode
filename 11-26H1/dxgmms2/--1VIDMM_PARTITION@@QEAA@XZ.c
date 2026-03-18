/*
 * XREFs of ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1400ABC7C
 * Callers:
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x14004F36C (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1400362C8 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1400377C8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x14003A788 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400AC26C (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_PARTITION::~VIDMM_PARTITION(char **this)
{
  PVOID *i; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  char *v4; // rcx
  char *v5; // rbx
  char *v6; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( this[5] )
  {
    DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
      (DXGAUTOEXPUSHLOCKSHARED *)v7,
      (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
    for ( i = (PVOID *)VIDMM_GLOBAL::_AdapterListHead; i != &VIDMM_GLOBAL::_AdapterListHead; i = (PVOID *)*i )
    {
      AdapterInfo = VIDMM_PARTITION::GetAdapterInfo((VIDMM_PARTITION *)this, (struct VIDMM_GLOBAL *)(i - 5655));
      VidMmiClosePerfCounters(AdapterInfo);
    }
    DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v7);
    v4 = this[5];
    if ( v4 )
    {
      v5 = v4 - 8;
      `vector destructor iterator'(
        v4,
        384LL,
        *((_QWORD *)v4 - 1),
        (void (__fastcall *)(char *))VIDMM_PARTITION_ADAPTER_INFO::~VIDMM_PARTITION_ADAPTER_INFO);
      operator delete(v5);
    }
  }
  v6 = this[3];
  if ( v6 )
    ObfDereferenceObject(v6);
}
