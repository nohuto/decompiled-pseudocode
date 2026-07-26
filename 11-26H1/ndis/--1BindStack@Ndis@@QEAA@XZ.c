/*
 * XREFs of ??1BindStack@Ndis@@QEAA@XZ @ 0x140168610
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x140077050 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140164210 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x140068540 (--_G-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x140069880 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

void __fastcall Ndis::BindStack::~BindStack(Ndis::BindStack *this, __int64 a2, __int64 a3)
{
  void **p; // rcx
  unsigned int i; // ebx
  unsigned int j; // ebx

  p = this->Miniport.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->Miniport.m_bindContext._p = 0LL;
    *(_QWORD *)&this->Miniport.m_bindContext.m_bufferSize = 0LL;
  }
  if ( this->Filters._p )
  {
    for ( i = this->Filters.m_numElements;
          i;
          wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
            (NDIS_BIND_LINK_BASE **)&this->Filters._p[i],
            a2,
            a3) )
    {
      --i;
    }
    ExFreePoolWithTag(this->Filters._p, 0x7272414Bu);
    this->Filters._p = 0LL;
    *(_QWORD *)&this->Filters.m_bufferSize = 0LL;
  }
  if ( this->Protocols._p )
  {
    for ( j = this->Protocols.m_numElements;
          j;
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
            (NDIS_BIND_LINK_BASE **)&this->Protocols._p[j],
            a2,
            a3) )
    {
      --j;
    }
    ExFreePoolWithTag(this->Protocols._p, 0x7272414Bu);
    this->Protocols._p = 0LL;
    *(_QWORD *)&this->Protocols.m_bufferSize = 0LL;
  }
}
